#include "io_none.h"

#include <cstdio>

namespace img32
{
   bool NoneIO::decode(Image* dstImg)
   {
      *dstImg = Image::Make(1, 1, ColorSpace::UNKNOWN);
      puts("Image extension not supported!");
      return false;
   }
} // namespace img32
