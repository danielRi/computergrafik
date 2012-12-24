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
	Image(int x, int y);
	void saveAsPixelMap(char[]);	
	int getHeight();
	int getWidth();
private:
	std::vector< std::vector<Pixel> > imageData;
	int height;
	int width;
};

#endif
