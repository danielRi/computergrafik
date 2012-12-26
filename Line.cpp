/**
 * Line.cpp
 *
 */
 
#include "Line.h"
 
Line::Line(Pixel aStart, Pixel aEnd) : start(aStart), end(aEnd){
	
	determineBresenhamDirections();
}

void Line::rotate(int angle){
	
}

void Line::determineBresenhamDirections(){
	int xs = start.getX();
	int ys = start.getY();
	int xe = end.getX();
	int ye = end.getY();
	
	int dx = xe - xs;
	int dy = ye - ys;
	
	
	if((dx >= 0)&&(dy >= 0)){
		//1. and 2. Octant
		if(dx > dy){
			fastDirection = 1;
			slowDirection = 1;
			fastAxis = 'x';
			slowAxis = 'y';
		}else if(dy > dx){
			fastDirection = 1;
			slowDirection = 1;
			fastAxis = 'y';
			slowAxis = 'x';
		}else{
			std::cout << "\n Error in determineBresenhamDirections: dy and dx appear to have the same value! \n";
		}
	}else if((dx >= 0)&&(dy <= 0)){
		//3. and 4. Octant
		if(dx > dy){
			fastDirection = 1;
			slowDirection = -1;
			fastAxis = 'x';
			slowAxis = 'y';
		}else if(dy > dx){
			fastDirection = -1;
			slowDirection = 1;
			fastAxis = 'y';
			slowAxis = 'x';
		}else{
			std::cout << "\n Error in determineBresenhamDirections: dy and dx appear to have the same value! \n";
		}
	}else if((dx <= 0)&&(dy <= 0)){
		//5. and 6. Octant
		if(dx > dy){
			fastDirection = -1;
			slowDirection = -1;
			fastAxis = 'x';
			slowAxis = 'y';
		}else if(dy > dx){
			fastDirection = -1;
			slowDirection = -1;
			fastAxis = 'y';
			slowAxis = 'x';
		}else{
			std::cout << "\n Error in determineBresenhamDirections: dy and dx appear to have the same value! \n";
		}
	}else if((dx <= 0)&&(dy >= 0)){
		//3. and 4. Octant
		if(dx > dy){
			fastDirection = -1;
			slowDirection = 1;
			fastAxis = 'x';
			slowAxis = 'y';
		}else if(dy > dx){
			fastDirection = 1;
			slowDirection = -1;
			fastAxis = 'y';
			slowAxis = 'x';
		}else{
			std::cout << "\n Error in determineBresenhamDirections: dy and dx appear to have the same value! \n";
		}
	}
}






