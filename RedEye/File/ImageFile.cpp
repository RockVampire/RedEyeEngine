#include "File/File.hpp"
#include "File/IMAGE/stb_image.h"

ImageFile::ImageFile()
{

}

ImageFile::~ImageFile()
{

}

unsigned char * ImageFile::ReadImage(const char * path,int * width,int * height,int * nrChannels)
{
    //stbi_set_flip_vertically_on_load(true);
    unsigned char *data = stbi_load(path, width, height, nrChannels, 0);
    return data;
}
