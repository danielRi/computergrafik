/**
 * Line.h
 *
 */
 
#ifndef LINE_H
#define LINE_H
#include <vector>
#include "Pixel.h"
#include "Vertex.h"

class Line : public Vertex{
public:
	Line(Pixel start, Pixel end);
	Pixel getStart();
	Pixel getEnd();
	void rotate(int angle);
	int getFastDirection();
	int getSlowDirection();
	char getFastAxis();
	char getSlowAxis();
	int getDx();
	int getDy();
private:
	Pixel start;
	Pixel end;
	int dX;
	int dY;
	std::vector <Pixel*> lineData;
	int fastDirection;
	int slowDirection;
	char fastAxis;
	char slowAxis;
	void determineBresenhamDirections();
};

#endif
