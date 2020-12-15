#ifndef IMAGE_H
#define IMAGE_H
#include <cstdint>
typedef uint8_t pixel_t;
typedef pixel_t* address_t;

enum class ColorSpace
{
   UNKNOWN,
   GRAYSCALE,
   RGB
};

struct image_t
{
   uint32_t width;
   uint32_t height;
   ColorSpace colorSpace;
   address_t pixels;
};

bool image_from_filename(image_t* dstImg, const char filename[]);

#endif