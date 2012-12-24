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
			
			row.push_back(Pixel(255,255,255));
		}
		
		imageData.push_back(row);	
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
	std::cout << " \n Image Data: \n";
	std::vector < Pixel > row;
	for (int y = 0; y < this->getHeight(); y++){
		std::cout << "\n" ;
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
