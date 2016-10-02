#include "Emitter.h"
#include "CurvingParticle.h"


Emitter::Emitter()
{
}

Particle* Emitter::emit()
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

	return newParticle;
}

void Emitter::setOrigin(int x, int y)
{
	originX = x;
	originY = y;
}

void Emitter::setCurvingParticleRatio(float ratio)
{
	curvingParticleRatio = ratio;
}

void Emitter::setColors(ofColor innerColor, ofColor outerColor)
{
	inner = innerColor;
	outer = outerColor;
}

