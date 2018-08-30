#pragma once

#include <vector>

namespace photocalib
{

class Image;
class ResponseProblem;

class ResponseProblemBuilder
{
  public:

    ResponseProblemBuilder();

    void AddImage(const Image& image);

    void Build(ResponseProblem& problem);

  protected:

    std::vector<Image> images_;
};

} // namespace photocalib