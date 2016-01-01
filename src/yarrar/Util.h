#pragma once

#include "Types.h"

#include <algorithm>
#include <iterator>
#include <opencv2/core/types.hpp>

namespace yarrar {

template<typename Container, typename Value>
bool contains(const Container& c, const Value& v) 
{
    return std::find(std::begin(c), std::end(c), v) != std::end(c);
}


cv::Size getScaledDownResolution(const int width,
                                 const int height,
                                 const int preferredWidth);

void rotate(const cv::Mat& src, cv::Mat& dst, const yarrar::Rotation90& rotation);

}
