#pragma once
#include "ofMain.h"

class Particle
{
public:
	Particle();

	ofPoint position;
	ofVec2f speed;
	int innerRadius;
	int centerRadius;
	int outerRadius;
	ofColor innerColor;
	ofColor centerColor;
	ofColor outerColor;


	void setup(ofPoint pos, ofVec2f sp, int centerRad, ofColor centerCol);
	void update();
	void draw();

	void sayHello();

	float angle = 0;
	bool positionSet = false;;

};

