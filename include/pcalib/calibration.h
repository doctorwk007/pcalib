#pragma once

#include <memory>
#include <vector>
#include <pcalib/response.h>
#include <pcalib/vignetting.h>

namespace pcalib
{

template <typename Scalar = double>
struct Calibration
{
  std::vector<std::shared_ptr<Response<Scalar>>> responses;

  std::shared_ptr<Vignetting> vignetting;
};

} // namespace pcalib