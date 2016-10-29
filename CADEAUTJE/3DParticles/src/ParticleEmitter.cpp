#include "ParticleEmitter.h"
#include "CurvingParticle.h"

//so we point to the values of particle to emit the new particles with
Particle* ParticleEmitter::emit()
{
	Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio))
	{	
		newParticle = new CurvingParticle(startX, startY, startZ);
	}
	else
	{
		newParticle = new Particle(startX, startY, startZ);
	}
	newParticle->setColors(ofColor::black, inner, outer);

	return newParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticleEmitter::setOrigin(int x, int y, int z) {
	startX = x;
	startY = y;
	startZ = z;
	speed.x = ofRandom(-5, 5);
	speed.y = ofRandom(-5, 5);
	speed.z = ofRandom(-5, 5);
}

void ParticleEmitter::move()
{
	if (startX < -ofGetWindowWidth() / 2) {
		startX = -ofGetWindowWidth() / 2;
		speed.x *= -1;
	}
	else if (startX > ofGetWindowWidth() / 2) {
		startX = ofGetWindowWidth() / 2;
		speed.x *= -1;
	}

	if (startY < -ofGetWindowHeight() / 2) {
		startY = -ofGetWindowHeight() / 2;
		speed.y *= -1;
	}
	else if (startY > ofGetHeight() / 2) {
		startY = ofGetHeight() / 2;
		speed.y *= -1;
	}

	if (startZ < -(ofGetWindowWidth() / 2))
	{
		startZ = -(ofGetWindowWidth() / 2);
		speed.z *= -1;
	}
	else if (startZ > ofGetWindowWidth() / 2)
	{
		startZ = ofGetWindowWidth() / 2;
		speed.z *= -1;
	}

	startX += speed.x;
	startY += speed.y;
	startZ += speed.z;
}

void ParticleEmitter::setColors(ofColor innerColor, ofColor outerColor) {
	inner = innerColor;
	outer = outerColor;
}

void ParticleEmitter::draw()
{
	ofFill();
	ofSetColor(ofColor::blue);
	ofDrawSphere(startX, startY, startZ, 40);

	ofNoFill();
	ofSetColor(ofColor::purple);
	ofDrawBox(ofGetWindowWidth(), ofGetWindowHeight(), ofGetWindowWidth());
}


