
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
	
	Pixel start(20,40);
	Pixel aPixel10(0, 60);
	Line aLine10(start, aPixel10);
	
	Pixel aPixel1(5, 20);
	Pixel aPixel2(18,5);
	Pixel aPixel3(20,5);
	
	Pixel aPixel4(23, 7);
	Pixel aPixel5(37,37);
	Pixel aPixel6(39,40);
	
	Pixel aPixel7(37, 45);
	Pixel aPixel8(25,76);
	Pixel aPixel9(20,79);
	
	
	Pixel aPixel11(17,76);
	Pixel aPixel12(2,40);

	Line aLine1(start, aPixel1);
	Line aLine2(start, aPixel2);
	Line aLine3(start, aPixel3);
	Line aLine4(start, aPixel4);
	Line aLine5(start, aPixel5);
	Line aLine6(start, aPixel6);
	Line aLine7(start, aPixel7);
	Line aLine8(start, aPixel8);
	Line aLine9(start, aPixel9);
	
	Line aLine11(start, aPixel11);
	Line aLine12(start, aPixel12);
	
	theImage.drawLineMidpoint(&aLine1);
	theImage.drawLineMidpoint(&aLine2);
	theImage.drawLineMidpoint(&aLine3);
	theImage.drawLineMidpoint(&aLine4);
	theImage.drawLineMidpoint(&aLine5);
	theImage.drawLineMidpoint(&aLine6);
	theImage.drawLineMidpoint(&aLine7);
	theImage.drawLineMidpoint(&aLine8);
	theImage.drawLineMidpoint(&aLine9);
	theImage.drawLineMidpoint(&aLine10);
	theImage.drawLineMidpoint(&aLine11);
	theImage.drawLineMidpoint(&aLine12);
	
	theImage.drawLineMidpoint(&aLine10);
	/*
	aPixel.setBlue(255);
	aPixel.setRed(0);
	aPixel2.setGreen(200);
	aPixel3.setRed(50);
	*/
	theImage.saveAsPixelMap("/Users/danielriegler/Desktop/test.ppm");
	cout << "Finished \n";
	return 0;
}
