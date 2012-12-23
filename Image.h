/**
 * Image.h
 *
 *
 */

#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
#include <vector>
#include "Pixel.h"

class Image{

public:
	Image();
	Image(int x, int y);
	void saveAsPixelMap(std::string aPath);	
private:
	std::vector< std::vector<Pixel> > imageData;
};

#endif
