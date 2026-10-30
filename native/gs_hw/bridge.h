/* SPDX-License-Identifier: GPL-3.0-or-later
 * Experimental native GS bridge. No C++ types or cross-module allocations.
 * Calls must be serialized by the host's GS consumer, never its EE/VU producers.
 * The host owns SIGNAL/FINISH/LABEL, CSR interrupt bits and IMR handling.
 */
#ifndef SPEEDRACER_GS_BRIDGE_H
#define SPEEDRACER_GS_BRIDGE_H
#include <stdint.h>
#ifdef _WIN32
#define SRGS_CALL __cdecl
#else
#define SRGS_CALL
#endif
#ifdef __cplusplus
extern "C" {
#endif
#define SRGS_ABI_VERSION 1u
#define SRGS_PRIV_BYTES 0x2000u
enum SrgsStatus { SRGS_OK=0, SRGS_ARGUMENT=1, SRGS_CLOSED=2, SRGS_FAILED=3, SRGS_BUFFER_SMALL=4 };
enum SrgsAspect { SRGS_4_3=0, SRGS_16_9=1, SRGS_FILL=2 };
typedef struct SrgsConfig {
    uint32_t size;
    uint32_t scale; /* 1..4, Vulkan only in ABI v1 */
    uint32_t aspect;
    uint32_t vsync;
    const char* resources_utf8;
    const char* cache_utf8;
} SrgsConfig;
typedef struct SrgsImage {
    uint32_t size;
    uint32_t width;
    uint32_t height;
    uint32_t bytes;
} SrgsImage;
typedef struct SrgsApi {
    uint32_t version;
    uint32_t size;
    int32_t (SRGS_CALL *open)(const SrgsConfig*, void* hwnd, const uint8_t* priv, uint32_t priv_bytes);
    int32_t (SRGS_CALL *close)(void);
    /* PATH1 requires a complete packet ending at EOP, <=1 MiB. PATH2/3 may
       continue partial GIFtags, packed/reglist payloads or IMAGE data. */
    int32_t (SRGS_CALL *gif)(uint32_t path, const uint8_t* data, uint32_t bytes);
    int32_t (SRGS_CALL *present)(const uint8_t* priv, uint32_t priv_bytes, uint32_t field);
    int32_t (SRGS_CALL *sync)(void);
    int32_t (SRGS_CALL *reset)(void);
    int32_t (SRGS_CALL *soft_reset)(uint32_t path_mask);
    int32_t (SRGS_CALL *write_csr)(uint32_t value);
    int32_t (SRGS_CALL *resize)(uint32_t width, uint32_t height);
    /* Query with data=NULL,capacity=0. A successful copy consumes the cached
       image; any later command invalidates it. All buffers belong to caller. */
    int32_t (SRGS_CALL *read_frame)(SrgsImage* info, uint8_t* data, uint32_t capacity);
    int32_t (SRGS_CALL *read_fifo)(uint8_t* data, uint32_t bytes);
    int32_t (SRGS_CALL *save_state)(uint8_t* data, uint32_t capacity, uint32_t* required);
    int32_t (SRGS_CALL *load_state)(const uint8_t* data, uint32_t bytes);
    uint32_t (SRGS_CALL *last_error)(char* data, uint32_t capacity);
} SrgsApi;
typedef const SrgsApi* (SRGS_CALL *SrgsGetApi)(uint32_t version, uint32_t table_bytes);
/* Loaded dynamically with GetProcAddress; no import library is required. */
#ifdef __cplusplus
}
#endif
#endif
