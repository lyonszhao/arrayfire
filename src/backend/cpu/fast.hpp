/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/features.h>
#include <Array.hpp>

using af::features;

namespace cpu
{

template<typename T>
features fast(const Array<T> &in, const float thr, const unsigned arc_length,
              const bool non_max, const float feature_ratio);

}
