#include "CurvingParticle.h"



CurvingParticle::CurvingParticle(int startX, int startY, int startZ) : Particle(startX, startY, startZ)
{
	curve = ofVec3f(ofRandom(-5, 5), ofRandom(-5, 5), ofRandom(-5, 5));
}


CurvingParticle::~CurvingParticle()
{
}

void CurvingParticle::move()
{
	position += speed;
	curve.rotate(2);
	position += curve;
	lifetime++;
}

