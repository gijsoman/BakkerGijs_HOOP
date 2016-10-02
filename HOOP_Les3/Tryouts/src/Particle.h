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


	void setup();
	void update();
	void draw();

	void sayHello();

	float angle;


};

