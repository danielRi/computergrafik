/**
 * Pixel.h
 *
 */
 
#ifndef PIXEL_H
#define PIXEL_H
#include <iostream>
#include <string>

 
 class Pixel{
 public:
 	Pixel(int x, int y);
 	Pixel(int red, int green, int blue, int x, int y);
 	void setRed(int red);
 	void setGreen(int green);
 	void setBlue(int blue);
 	void setColor(int r, int g, int b);
 	int getRed();
 	int getGreen();
 	int getBlue();
 	void setChanged(bool aValue);
 	bool isChanged();
 	int getX();
 	int getY();
 private:
 	int red;
 	int green;
 	int blue;
 	int x;
 	int y;
 	bool hasBeenChanged;
 };
 
 #endif
