#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "CircularParticle.h"
#include "ParticleEmitter.h"

#define AANTALPARTICLES 100

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		Particle particle1;
		ParticleEmitter emit1;
		ParticleEmitter emit2;
		ParticleEmitter emit3;
		ParticleEmitter emit4;
		CircularParticle circle1[AANTALPARTICLES];


		
};
