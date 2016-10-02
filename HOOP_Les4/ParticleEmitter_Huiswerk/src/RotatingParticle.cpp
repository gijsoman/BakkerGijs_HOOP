#include "RotatingParticle.h"


RotatingParticle::RotatingParticle(int startX, int startY) : Particle(startX, startY) {

}

void RotatingParticle::move()
{

	if (position.y < 0)
	{
		speed.y *= -1;
	}
	if (position.y > ofGetHeight())
	{
		speed.y *= -1;
	}

	position += speed;
	
}
