#include "ParticleEmitter.h"
#include "CurvingParticle.h"
#include "RotatingParticle.h"

Particle* ParticleEmitter::emit() {
    Particle* newParticle;

    if (ofRandom(1) > (1 - curvingParticleRatio)) {
        newParticle = new CurvingParticle(originX, originY);
    } else {
        newParticle = new Particle(originX, originY);
    }
	if (ofRandom(1) > (1 - circularParticleRatio))
	{
		newParticle = new RotatingParticle(originX, originY);
	}
	else
	{
		newParticle = new Particle(originX, originY);
	}
    newParticle->setColours(ofColor::white, inner, outer);

    return newParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) {
    curvingParticleRatio = ratio;
}

void ParticleEmitter::setRotatingParticleRatio(float rotio) {
	circularParticleRatio = rotio;
}

void ParticleEmitter::setOrigin(int x, int y) {
    originX = x;
    originY = y;
}

void ParticleEmitter::setColours(ofColor innerColour, ofColor outerColor) {
    inner = innerColour;
    outer = outerColor;
}