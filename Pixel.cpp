/**
 * Pixel.cpp
 *
 */
 
#include "Pixel.h"

Pixel::Pixel(){
	red = 255;
	green = 255;
	blue = 255;
	hasBeenChanged = false;
}

Pixel::Pixel(int r, int g, int b){
	red = r;
	green = g;
	blue = b;
	hasBeenChanged = false;
}

void Pixel::setRed(int r){
	red = r;
	hasBeenChanged = true;
}

void Pixel::setGreen(int g){
	green = g;
	hasBeenChanged = true;
}

void Pixel::setBlue(int b){
	blue = b;
	hasBeenChanged = true;
}

void Pixel::setColor(int r, int g, int b){
	red = r;
	green = g;
	blue = b;
	hasBeenChanged = true;
}

int Pixel::getRed(){
	return red;
}

int Pixel::getGreen(){
	return green;
}

int Pixel::getBlue(){
	return blue;
}

bool Pixel::isChanged(){
	return hasBeenChanged;
}

 
