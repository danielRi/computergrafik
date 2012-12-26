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
			std::cout <<"rot: "<< imageData.at(y).at(x)->getRed();
            
		}
	}
	std::cout << "\n Writing File to " << aPath << "\n \n";
	myfile.close();
}

void Image::setPixel(Pixel* aPixel){
	int tX = aPixel->getX();
	int tY = aPixel->getY();
	imageData.at(tY).at(tX) = aPixel;	
}

void Image::drawLine(Line aLine){
	
}

std::vector<Vertex*> Image::getVertices(){
	return vertices;
}

void addVertex(Vertex* aVertex){

}


