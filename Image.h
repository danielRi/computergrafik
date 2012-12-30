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
#include "Vertex.h"
#include "Line.h"

class Image{

public:
	Image();
	Image(int width, int height);
	void saveAsPixelMap(char[]);	
	int getHeight();
	int getWidth();
	void setPixel(Pixel *aPixel);
	void drawLine(Line *aLine);
	void drawLineMidpoint(Line *aLine);
	std::vector<Vertex*> getVertices();
private:
	std::vector< std::vector<Pixel*> > imageData;
	int height;
	int width;
	std::vector <Vertex*> vertices;
	void addVertex(Vertex* aVertex);
};

#endif
