#pragma once
#include "ofMain.h"
#include "Particle.h"


class CircularParticle : public Particle
{
public:
	CircularParticle();
	void sayHello();
	void update();
	void setup();

	int random;
	float angleIncrease;
	

};

