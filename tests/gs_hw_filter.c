/* SPDX-License-Identifier: GPL-3.0-or-later */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "bridge.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static const SrgsApi *api;
static unsigned char priv[SRGS_PRIV_BYTES];
static void check(int ok, const char *message) {
    if (ok) return;
    char error[512] = {0};
    if (api) api->last_error(error, sizeof(error));
    fprintf(stderr, "FAIL %s: %s\n", message, error);
    if (api) api->close();
    exit(1);
}
typedef struct Pair { uint64_t value, address; } Pair;
static void reg(unsigned off, uint64_t v) { memcpy(priv + off, &v, 8); }
static void send(const Pair *data, unsigned count) {
    Pair *packet = malloc((count + 1) * sizeof(Pair));
    check(packet != NULL, "packet allocation");
    packet[0] = (Pair){count | (1ull << 15) | (1ull << 60), 0xE};
    memcpy(packet + 1, data, count * sizeof(Pair));
    check(api->gif(3, (unsigned char *)packet, (count + 1) * 16) == SRGS_OK, "send A+D");
    free(packet);
}
static void scene(void) {
    Pair upload[] = {{(0x2000ull << 32) | (1ull << 48), 0x50},
                     {0, 0x51}, {8ull | (8ull << 32), 0x52}, {0, 0x53}};
    send(upload, sizeof(upload) / sizeof(*upload));
    struct { Pair tag; uint32_t texels[64]; } image;
    image.tag = (Pair){16ull | (1ull << 15) | (2ull << 58), 0};
    for (unsigned y = 0; y < 8; ++y)
        for (unsigned x = 0; x < 8; ++x)
            image.texels[y * 8 + x] = x + y < 7 ? 0x8000ff00u : 0x80000000u;
    check(api->gif(3, (unsigned char *)&image, sizeof(image)) == SRGS_OK, "upload 8x8 staircase texture");
    Pair draw[] = {
        {10ull << 16, 0x4C}, {140ull | (1ull << 32), 0x4E}, {0, 0x18},
        {(639ull << 16) | (447ull << 48), 0x40}, {3ull << 16, 0x47}, {1, 0x1A}, {1, 0x46},
        {6, 0}, {0x80000000ull | (0x3f800000ull << 32), 1},
        {0, 5}, {640ull * 16 | ((448ull * 16) << 16), 5},
        {0x2000ull | (1ull << 14) | (3ull << 26) | (3ull << 30) | (1ull << 34) | (1ull << 35), 6},
        {0, 0x14}, /* Explicit guest nearest sampling, as in a low-resolution HUD. */
        {1ull | (1ull << 2), 8},
        {6ull | (1ull << 4) | (1ull << 8), 0},
        {0x80808080ull | (0x3f800000ull << 32), 1},
        {0, 3}, {64ull * 16 | ((64ull * 16) << 16), 5},
        {8ull * 16 | ((8ull * 16) << 16), 3}, {320ull * 16 | ((320ull * 16) << 16), 5}
    };
    send(draw, sizeof(draw) / sizeof(*draw));
}
int main(int argc, char **argv) {
    check(argc == 2, "DLL path argument");
    HMODULE dll = LoadLibraryA(argv[1]);
    check(dll != NULL, "load native renderer");
    SrgsGetApi get = (SrgsGetApi)(void *)GetProcAddress(dll, "srgs_get_api");
    check(get != NULL, "C ABI export");
    api = get(SRGS_ABI_VERSION, sizeof(SrgsApi));
    check(api != NULL, "C ABI table");
    SetEnvironmentVariableA("PS2_GS_FXAA", "0");
    unsigned intermediates[2] = {0};
    for (unsigned linear = 0; linear <= 1; ++linear) {
        memset(priv, 0, sizeof(priv));
        reg(0, 1ull | (1ull << 2) | (1ull << 5) | (0xffull << 8));
        reg(0x10, 4ull | (32ull << 3) | (2ull << 13)); reg(0x20, 1);
        reg(0x70, 10ull << 9);
        reg(0x80, 636ull | (50ull << 12) | (3ull << 23) | (2559ull << 32) | (447ull << 44));
        SetEnvironmentVariableA("PS2_GS_LINEAR", linear ? "1" : "0");
        SrgsConfig cfg = {sizeof(cfg), 3, SRGS_4_3, 0, NULL, NULL};
        check(api->open(&cfg, NULL, priv, sizeof(priv)) == SRGS_OK, "open 3x renderer");
        for (unsigned frame = 0; frame < 3; ++frame) {
            scene();
            check(api->present(priv, sizeof(priv), frame & 1) == SRGS_OK, "render texture sprite");
        }
        SrgsImage info = {sizeof(info), 0, 0, 0};
        check(api->read_frame(&info, NULL, 0) == SRGS_BUFFER_SMALL, "query frame");
        check(info.width == 1920 && info.height == 1344, "3x frame dimensions");
        unsigned char *rgba = malloc(info.bytes);
        check(rgba != NULL, "allocate frame");
        check(api->read_frame(&info, rgba, info.bytes) == SRGS_OK, "read frame");
        for (unsigned y = 64 * 3; y < 320 * 3; ++y)
            for (unsigned x = 64 * 3; x < 320 * 3; ++x) {
                unsigned g = rgba[(y * info.width + x) * 4 + 1];
                if (g > 0 && g < 255) ++intermediates[linear];
            }
        check(rgba[((80 * 3) * info.width + 80 * 3) * 4 + 1] == 255, "flat texture color retained");
        free(rgba);
        check(api->close() == SRGS_OK, "close native renderer");
    }
    check(intermediates[0] == 0, "guest nearest retains discrete texels");
    check(intermediates[1] > 100, "high-quality sampler smooths nearest HUD sprite texture");
    SetEnvironmentVariableA("PS2_GS_LINEAR", "invalid");
    SrgsConfig cfg = {sizeof(cfg), 3, SRGS_4_3, 0, NULL, NULL};
    check(api->open(&cfg, NULL, priv, sizeof(priv)) == SRGS_ARGUMENT, "invalid sampler option rejected");
    SetEnvironmentVariableA("PS2_GS_LINEAR", NULL);
    FreeLibrary(dll);
    printf("PASS original/linear HUD sprite sampling: %u/%u intermediate pixels; flat colors and invalid input checked\n",
           intermediates[0], intermediates[1]);
}
