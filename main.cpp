
/**
 * main.cpp
 *
 */

#include <iostream>
#include "Image.h"

using namespace std;

int main(int argc, char* argv[]){
	
	cout << "Starting...\n";
	Image theImage;
	theImage.saveAsPixelMap("/Users/danielriegler/Desktop/test.ppm");
	cout << "Finished \n";
	return 0;
}
