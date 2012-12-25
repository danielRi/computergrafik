
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
	
	Pixel aPixel(9,4);
	Pixel aPixel2(20,79);
	Pixel aPixel3(19,79);
	theImage.setPixel(aPixel);
	theImage.setPixel(aPixel2);
	theImage.setPixel(aPixel3);
	cout << "Finished \n";
	theImage.saveAsPixelMap("/Users/danielriegler/Desktop/test.ppm");
	return 0;
}
