#pragma once

#include "ofMain.h"

#define LIFETIME 200

class Particle
{
public:
	Particle(int startX, int startY);
	//virtual for inheritance 
	virtual ~Particle();
	virtual void move();

	void draw();

	void setColors(ofColor center, ofColor inner, ofColor outer);

	bool dead();

//protected so the class can use it and the classes that inherit from it can use it
protected:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime;

	ofColor centerColor = ofColor :: black;
	ofColor innerColor;
	ofColor outerColor;
};

