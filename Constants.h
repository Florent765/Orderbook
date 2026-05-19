#pragma once

#include <limits>

#include "Usings.h"

struct Constants {
    static constexpr Price InvalidePrice = std::numeric_limits<Price>::quiet_NaN();
}