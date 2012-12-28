/**
 * Image.cpp
 *	
 */
  
#include "Image.h"

Image::Image(){
	int tWidth = 8;
	int tHeight = 3;
	height = tHeight;
	width = tWidth;
	std::vector < Pixel* > row;
	for(int i = 0; i < tHeight; i++){
		row.clear();
		for(int j = 0; j < tWidth; j++){
			Pixel aPixel(255,255,255,j,i);
			row.push_back(&aPixel);
			
		}
		
		imageData.push_back(row);	
	}
	
}

Image::Image(int aWidth, int aHeight){
	std::cout << aWidth << "     "<< aHeight;
	if (aWidth<=0 || aHeight<= 0){
		std::cout << "\n Image Constructor: Error - Invalid size. Width and height must be greater 0 \n ";
	}else{
		height = aHeight;
		width = aWidth;
		std::vector < Pixel* > row;
		for(int i = 0; i < aHeight; i++){
			row.clear();
			for(int j = 0; j < aWidth; j++){
				Pixel *aPixel = new Pixel(255,255,255,j,i);
				row.push_back(aPixel);
				
			}
			imageData.push_back(row);
			
		}
		for(int y = 0; y < aHeight; y++){
			for(int x = 0; x < aWidth; x++){	
				std::cout <<"rot im constr: "<< imageData.at(y).at(x)->getRed();	
			}
		}
	}
}

int Image::getHeight(){
	return height;
}

int Image::getWidth(){
	return width;
}

void Image::saveAsPixelMap(char aPath[]){
	
	std::ofstream myfile;
	myfile.open(aPath);
	
	myfile << "P3\n" << this->getWidth() <<" "<< this->getHeight() <<"\n255\n";
	std::vector < Pixel* > row;
	for (int y = 0; y < this->getHeight(); y++){
		row = imageData.at(y);
		for (int x = 0; x < this->getWidth(); x++){
            
			myfile << row.at(x)->getRed() << " ";
			myfile << row.at(x)->getGreen() << " ";
			myfile << row.at(x)->getBlue() << " ";
			
            
		}
	}
	std::cout << "\n Writing File to " << aPath << "\n \n";
	myfile.close();
}

void Image::setPixel(Pixel* aPixel){
	
	int tX = aPixel->getX();
	int tY = aPixel->getY();
	std::cout << "setting Pixel ("<< tX <<"/"<< tY <<")";
	if (tX >= width){
		std::cout << "Error: x out of range at "<< tX;
	}
	if (tY >= height){
		std::cout << "Error: y out of range at "<< tY;
	}
	imageData.at(tY).at(tX) = aPixel;	
}

void Image::drawLine(Line *aLine){
	int f1, s1, f2, s2, const1, const2, error;
	int dx = aLine->getDx();
	int dy = aLine->getDy();
	
	
	int fastDirection = aLine->getFastDirection();
	int slowDirection = aLine->getSlowDirection();
	int fastAxis = aLine->getFastAxis();
	if(fastAxis=='x'){
		f1 = aLine->getStart().getX();
		f2 = aLine->getEnd().getX();
		s1 = aLine->getStart().getY();
		s2 = aLine->getEnd().getY();
		const1 = abs(dx) + abs(dx);
		const2 = abs(dy) + abs(dy);
		error = const2 - abs(dx);
	}else if(fastAxis=='y'){
		f1 = aLine->getStart().getY();
		f2 = aLine->getEnd().getY();
		s1 = aLine->getStart().getX();
		s2 = aLine->getEnd().getX();
		const1 = abs(dy) + abs(dy);
		const2 = abs(dx) + abs(dx);
		error = const2 - abs(dy);
	}
	
	
	std::cout <<"\n f1: "<< f1 << " f2: " << f2 << " fastDirection: " << fastDirection << "\n";
	while(f1 != f2){
		Pixel *p;
		if(fastAxis=='x'){
			p = new Pixel(f1, s1);
		}else{
			p = new Pixel(s1, f1);
		}
			
		setPixel(p);
		f1 += fastDirection;
		if(error <= 0){
			error += const2;
		}else{
			s1 += slowDirection;
			error += const2 - const1;
		}
		std::cout << "errorvar: "<<error;
	}
	
}

std::vector<Vertex*> Image::getVertices(){
	return vertices;
}

void addVertex(Vertex* aVertex){
	
}


