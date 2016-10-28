#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"
#include "ParticleDeleter.h"

class ofApp : public ofBaseApp{

	public:
		void setup();

		void update();

		void draw();

		void keyPressed(int key);

	private:
		vector<Particle*> particles;

		ParticleEmitter emit1;
		ParticleEmitter emit2;
		ParticleDeleter del;

		
};
