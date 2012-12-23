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
 		Pixel();
 		Pixel(int red, int green, int blue);
 		void setRed(int red);
 		void setGreen(int green);
 		void setBlue(int blue);
 		
 		int getRed();
 		int getGreen();
 		int getBlue();
 	
 	private:
 		int red;
 		int green;
 		int blue;
 		bool hasBeenChanged;
 	
 	 
 };
 
 #endif
