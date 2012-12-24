
/**
 * main.cpp
 *
 */

#include <iostream>
#include "Image.h"

using namespace std;

int main(int argc, char* argv[]){
	
	cout << "Starting...\n";
	Image theImage(10, 5);
	
	Pixel aPixel(9,4);
	theImage.setPixel(aPixel);
	cout << "Finished \n";
	theImage.saveAsPixelMap("/Users/danielriegler/Desktop/test.ppm");
	return 0;
}
