#pragma once

#include "ofMain.h"

#define LIFETIME 500

class Particle
{
public:
	Particle(int startX, int startY, int startZ);
	//virtual for inheritance 
	virtual ~Particle();
	virtual void move();

	void draw();

	void setColors(ofColor center, ofColor inner, ofColor outer);

	bool dead();

//protected so the class can use it and the classes that inherit from it can use it
protected:
	ofVec3f position;
	float radius;
	ofVec3f speed;
	long lifetime;

	ofColor centerColor = ofColor :: black;
	ofColor innerColor;
	ofColor outerColor;
};

