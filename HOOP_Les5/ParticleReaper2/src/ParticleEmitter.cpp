#include "ParticleEmitter.h"
#include "CurvingParticle.h"

//so we point to the values of particle to emit the new particles with
Particle* ParticleEmitter::emit()
{
	Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio))
	{	
		newParticle = new CurvingParticle(originX, originY);
	}
	else
	{
		newParticle = new Particle(originX, originY);
	}
	newParticle->setColors(ofColor::black, inner, outer);

	return newParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticleEmitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void ParticleEmitter::setColors(ofColor innerColor, ofColor outerColor) {
	inner = innerColor;
	outer = outerColor;
}



