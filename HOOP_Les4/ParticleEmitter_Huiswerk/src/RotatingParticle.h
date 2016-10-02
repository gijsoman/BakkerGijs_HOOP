#pragma once

#include "ofMain.h"
#include "Particle.h"

class RotatingParticle : public Particle
{
public:
	RotatingParticle(int startX, int startY);
	void move();

	int random = ofRandom(0, 100);
	int angle;

};

