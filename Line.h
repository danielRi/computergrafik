/**
 * Line.h
 *
 */
 
#ifndef LINE_H
#define LINE_H
#include "Pixel.h"
#include "Vertex.h"

class Line : public Vertex{
public:
	Line(Pixel start, Pixel end);
	Pixel getStart();
	Pixel getEnd();
	void rotate(int angle);
private:
	Pixel start;
	Pixel end;
};

#endif
