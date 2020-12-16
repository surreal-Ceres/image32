#ifndef IO_NONE_H
#define IO_NONE_H
#include "io.h"

namespace img32
{
   class NoneIO : public IO
   {
   public:
      virtual bool decode(image_t* dstImg) override;
   };
} // namespace img32


#endif