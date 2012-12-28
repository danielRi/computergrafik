
/**
 * main.cpp
 *
 */

#include <iostream>
#include "Image.h"

using namespace std;

int main(int argc, char* argv[]){
	
	cout << "Starting...\n";
	Image theImage(40, 80);
	
	Pixel aPixel(20,10);
	Pixel aPixel2(2,7);
	Pixel aPixel3(10,70);
	Pixel aPixel4(39,50);
	Pixel* p = &aPixel;
	theImage.setPixel(p);
	theImage.setPixel(&aPixel2);
	theImage.setPixel(&aPixel3);
	
	Line aLine(aPixel2, aPixel4);
	theImage.drawLine(&aLine);
	
	aPixel.setBlue(255);
	aPixel.setRed(0);
	aPixel2.setGreen(200);
	aPixel3.setRed(50);

	theImage.saveAsPixelMap("/Users/danielriegler/Desktop/test.ppm");
	cout << "Finished \n";
	return 0;
}
