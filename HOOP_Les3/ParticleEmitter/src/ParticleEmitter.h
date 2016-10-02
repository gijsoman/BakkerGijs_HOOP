#pragma once

#include "ofMain.h"
#include "Particle.h"

class ParticleEmitter
{
public:
	ParticleEmitter();

	//standard functions.
	void setup();
	void update();
	void draw();

	//variables for the Emitter
	ofPoint position;
	ofVec2f speed;
	int radius;
	ofColor color;

	//variables for the circular patern
	float posX;
	float posY;
	float angle = 0;
	float r;

	//for the particles to spawn
	static const int AantalParticles = 100;
	Particle part1[AantalParticles];
	int lifetime;
	int delayBetweenParticles;
	ofPoint partPosition;
	ofVec2f partSpeed;
	int partCenterRad;
	ofColor partCenterCol;
	int partCounter = 0;

	
	

	
};

