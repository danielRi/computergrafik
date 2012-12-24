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
	std::vector < Pixel > row;
	for(int i = 0; i < tHeight; i++){
		row.clear();
		for(int j = 0; j < tWidth; j++){
			
			row.push_back(Pixel(255,255,255,j,i));
		}
		
		imageData.push_back(row);	
	}
	
}

Image::Image(int aWidth, int aHeight){
	if (width<=0 || height<= 0){
		std::cout << "\n Image Constructor: Error - Invalid size. Width and height must be greater 0 \n ";
	}else{
		height = aHeight;
		width = aWidth;
		std::vector < Pixel > row;
		for(int i = 0; i < aHeight; i++){
			row.clear();
			for(int j = 0; j < aWidth; j++){
				row.push_back(Pixel(255,255,255, j, i));
			}
			imageData.push_back(row);	
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
	std::vector < Pixel > row;
	for (int y = 0; y < this->getHeight(); y++){
		row = imageData.at(y);
		for (int x = 0; x < this->getWidth(); x++){
            
			myfile << row.at(x).getRed() << " ";
			myfile << row.at(x).getGreen() << " ";
			myfile << row.at(x).getBlue() << " ";
            
		}
	}
	std::cout << "\n Writing File to " << aPath << "\n \n";
	myfile.close();
}

void Image::setPixel(Pixel aPixel){
	int tX = aPixel.getX();
	int tY = aPixel.getY();
	std::vector < Pixel > &row = imageData.at(tY);
	aPixel.setChanged(true);
	row.at(tX).setRed(aPixel.getRed());
	row.at(tX).setGreen(aPixel.getGreen());
	row.at(tX).setBlue(aPixel.getBlue());	
}
