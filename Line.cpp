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

int Line::getDx(){
	return dX;
}

int Line::getDy(){
	return dY;
}

void Line::determineBresenhamDirections(){
	int xs = start.getX();
	int ys = start.getY();
	int xe = end.getX();
	int ye = end.getY();
	
	int dx = xe - xs;
	int dy = ye - ys;
	std::cout << "\n dx: "<< dx << " dy: "<< dy <<"\n";
	dX = dx;
	dY = dy;
	
	if((dx > 0)&&(dy < 0)){
		//1. and 2. Octant
		dx = abs(dx);
		dy = abs(dy);
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
	}else if((dx > 0)&&(dy > 0)){
		//3. and 4. Octant
		dx = abs(dx);
		dy = abs(dy);
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
	}else if((dx < 0)&&(dy > 0)){
		//5. and 6. Octant
		dx = abs(dx);
		dy = abs(dy);
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
	}else if((dx < 0)&&(dy < 0)){
		//7. and 8. Octant
		dx = abs(dx);
		dy = abs(dy);
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
	}else if(dy==0){
		if(dx < 0){
			fastDirection = -1;
			slowDirection = 0;
			fastAxis = 'x';
			slowAxis = 'y'; 
		}else if(dx > 0){
			fastDirection = 1;
			slowDirection = 0;
			fastAxis = 'x';
			slowAxis = 'y'; 			
		}
		
	}else if(dx==0){
		if(dy < 0){
			fastDirection = -1;
			slowDirection = 0;
			fastAxis = 'y';
			slowAxis = 'x'; 
		}else if(dx > 0){
			fastDirection = 1;
			slowDirection = 0;
			fastAxis = 'y';
			slowAxis = 'x'; 			
		}
	}else{
		std::cout << "\n Error: A Line out of these Pixels seems impossible \n";	
	}
	std::cout << "fastDirection: "<< fastDirection << "   fastAxis: " << fastAxis << "\n";
}

int Line::getFastDirection(){
	return fastDirection;
}

int Line::getSlowDirection(){
	return slowDirection;
}

char Line::getFastAxis(){
	return fastAxis;
}

char Line::getSlowAxis(){
	return slowAxis;
}

Pixel Line::getStart(){
	return start;
}

Pixel Line::getEnd(){
	return end;
}






