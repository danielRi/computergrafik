/**
 * Image.h
 *
 *
 */

#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>

class Image{

	public:
		Image();
		Image(int x, int y);
		void saveAsPixelMap(std::string aPath);	
};

#endif
