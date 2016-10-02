#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "CircularParticle.h"

#define AANTALPARTICLES 100

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		Particle particle1;
		CircularParticle circle1[AANTALPARTICLES];


		
};
