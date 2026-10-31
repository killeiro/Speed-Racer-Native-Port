// Frozen v16 snapshot body; compare against the exact prior descriptor-cache implementation.
std::uint32_t snapshot_batch(std::uint32_t prims, std::uint32_t &lo, std::uint32_t &hi) {
    Batch &b = g_batch;
    lo = hi = 0;
    if (g_batch_reads.empty()) return 0;
    const Range fb = pages(b.fbp, b.fbw, b.fpsm, b.minx, b.miny, b.maxx, b.maxy);
    const Range z = pages(b.zbp, b.fbw, b.zpsm, b.minx, b.miny, b.maxx, b.maxy);
    const auto written = [&](const Range &t) { return overlaps_vram(t, fb) || (b.zwrite && overlaps_vram(t, z)); };
    bool any = false;
    for (const Range &t : g_batch_reads) any = any || written(t);
    if (!any) return 0;
    Range shared;
    // Buffered descriptors are immutable during this scan. Keep their pure
    // texture/mip bounds only for the most recent descriptor in this batch;
    // primitive-specific read ranges and every overlap test still run below.
    std::uint32_t cached_setup = ~0u, mips = 0;
    std::array<Range, 7> texture_bounds;
    const Range *writes[2] = {};
    for (std::uint32_t i = 0; i < prims; ++i) {
        const std::uint32_t *rec = b.prims.data() + i * kPrimWords;
        const std::uint32_t *setup = b.setups.data() + rec[0] * kSetupWords;
        if (!(setup[0] & 2u) || reads_own_word(rec, setup)) continue;
        if (cached_setup != rec[0]) {
            cached_setup = rec[0];
            mips = active_mips(setup);
            for (std::uint32_t level = 0; level <= mips; ++level)
                texture_bounds[level] = texture_range(setup, level);
            writes[0] = psm_share_bits(setup[14], b.fpsm) ? &fb : nullptr;
            writes[1] = b.zwrite && psm_share_bits(setup[14], b.zpsm) ? &z : nullptr;
        }
        for (std::uint32_t level = 0; level <= mips; ++level) {
            const Range &whole = texture_bounds[level];
            // UV rectangles are in base-level coordinates; use a conservative level region for mip draws.
            const Range t = mips ? whole : read_range(rec, setup, whole);
            for (const Range *w : writes)
                if (w) add_shared_vram(shared, t, *w);
        }
    }
    if (shared.lo >= shared.hi) return 0;
    lo = static_cast<std::uint32_t>(std::min<std::uint64_t>(shared.lo, kMemorySize) / 4);
    hi = static_cast<std::uint32_t>(std::min<std::uint64_t>(shared.hi, kMemorySize) / 4);
    if (hi <= lo) return 0;
    const std::uint32_t words = (hi - lo) * g_scale * g_scale;
    dispatch_linear(kSnapshot, words, push_params({lo, words}));
    return words;
}
