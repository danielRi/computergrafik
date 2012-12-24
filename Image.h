/**
 * Image.h
 *
 *
 */

#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
#include <fstream>
#include <vector>
#include "Pixel.h"

class Image{

public:
	Image();
	Image(int width, int height);
	void saveAsPixelMap(char[]);	
	int getHeight();
	int getWidth();
	void setPixel(Pixel aPixel);
private:
	std::vector< std::vector<Pixel> > imageData;
	int height;
	int width;
};

#endif
