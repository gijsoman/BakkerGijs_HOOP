#pragma once
#include "ofMain.h"

class spawnCircle
{
public:
	spawnCircle();
	~spawnCircle();
	void drawAtLocation(int X, int Y, int radius, ofColor circleColor);
	void moveInRandomDirection(int xSpeed, int ySpeed);
	void pulseCircleWithSpeed(int radiusChange, int radiusChangeSpeed);

private:
	//for drawAtLocation you need the following variables
	int x;				//for the x location
	int y;				//for the y location
	int radius;			//for the radius of the circle
	ofColor circleColor; //you can also regulate the opacity in here

	//for pulseCircleWithSpeed you need the following variables.
	int radiusChange;	//the amount of which you make te circle smaller or bigger
	int radiusChangeSpeed; //the speed you change the radius with.

	//for moving the circles you need the following variables.
	int xSpeed;			//an amount that increses the x value to move it in that direction.
	int ySpeed;			//an amount that increses the y value to move it in that direction.

	

};