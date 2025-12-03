#include "Image.h"

Image::Image()
{
	this->width = 0;
	this->height = 0;
}

Image::Image(int w, int h)
{
    this->height = h;
    this->width = w;
}

int Image::GetWidth()
{
    return this->width;
}

int Image::GetHeight()
{
    return this->height;
}

void Image::SetWidth(int w)
{
    this->width = w;
}

void Image::SetHeight(int h)
{
    this->height = h;
}