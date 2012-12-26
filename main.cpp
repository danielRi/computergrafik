
/**
 * main.cpp
 *
 */

#include <iostream>
#include "Image.h"

using namespace std;

int main(int argc, char* argv[]){
	
	cout << "Starting...\n";
	Image theImage(4, 8);
	
	Pixel aPixel(2,1);
	Pixel aPixel2(2,7);
	Pixel aPixel3(1,7);
	Pixel* p = &aPixel;
	theImage.setPixel(p);
	theImage.setPixel(&aPixel2);
	theImage.setPixel(&aPixel3);
	
	aPixel.setBlue(255);
	aPixel.setRed(0);
	aPixel2.setGreen(200);
	aPixel3.setRed(50);

	theImage.saveAsPixelMap("/Users/danielriegler/Desktop/test.ppm");
	cout << "Finished \n";
	return 0;
}
