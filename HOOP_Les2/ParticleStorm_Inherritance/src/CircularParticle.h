#pragma once
#include "ofMain.h"
#include "Particle.h"


class CircularParticle : public Particle
{
public:
	CircularParticle();
	void sayHello();
	void update();
	int random = ofRandom(100,200);
	float random2 = ofRandom(0.1, 0.5);
};

