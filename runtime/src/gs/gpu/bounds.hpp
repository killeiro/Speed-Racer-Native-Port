#pragma once

namespace ps2::gs::gpu::bounds {
// GS coordinates are unsigned 16.4 values minus a 16-bit XYOFFSET.
// Keep bounding-box rounding in integer space; interpolation remains unchanged.
inline int ceil_pixel(int fixed) { return (fixed + 15) >> 4; }
inline int floor_pixel(int fixed) { return fixed >> 4; }
inline int first_pixel(int fixed, int scale) {
    if (scale == 1) return ceil_pixel(fixed);
    const int sample = ceil_pixel(fixed * scale);
    return sample / scale - (sample < 0 && sample % scale != 0);
}
}
