#include "ParticleEmitter.h"



ParticleEmitter::ParticleEmitter()
{
}

void ParticleEmitter::setup()
{
	//setting up the emitter.
	r = ofRandom(180, 220);
	radius = 50;
	color = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
	posX = ofRandom(0, ofGetWindowWidth());
	posY = ofRandom(0, ofGetWindowHeight());

	////setting up the variables to spawn the particle with.
	//partSpeed = ofVec2f(ofRandom(-0.5, 0.5), ofRandom(-0.5, 0.5));
	//partCenterRad = ofRandom(10, 30);
	//partCenterCol = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
	//part1.setup(partPosition, partSpeed, partCenterRad, partCenterCol);
}

void ParticleEmitter::update()
{
	//update emitter.
	position.x = posX + cos(angle) * r;
	position.y = posY + sin(angle) * r;
	angle = angle + 0.01;
	if (angle > PI * 2)
	{
		angle = 0;
	}

	//setup particle after emitter is updated
	if (partCounter < AantalParticles)
	{
		//setting up the variables to spawn the particle with.
		partSpeed = ofVec2f(ofRandom(-0.5, 0.5), ofRandom(-0.5, 0.5));
		partCenterRad = ofRandom(10, 30);
		partCenterCol = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
		partPosition = position;
		part1[partCounter].setup(partPosition, partSpeed, partCenterRad, partCenterCol);
		partCounter++;
	}
	//update particle.
	for (int i = 0; i < AantalParticles; i++)
	{
		part1[i].update();
	}

}

void ParticleEmitter::draw()
{
	//draw emitter
	ofSetColor(color);
	ofDrawCircle(position, radius);
	
	//draw particle.
	for (int i = 0; i < AantalParticles; i++)
	{
		part1[i].draw();
	}


}