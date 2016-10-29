#pragma once

#include "Particle.h"

class ParticleEmitter
{
	public:
		void setOrigin(int x, int y, int z);

		void setCurvingParticleRatio(float ratio);

		void setColors(ofColor innerColor, ofColor outerColor);

		void draw();

		void move();

		//point to the adress. it gets a value from where it is pointed to.
		Particle* emit();

	private:
		ofVec3f speed;

		int startX;
		int startY;
		int startZ;
		float curvingParticleRatio;
		ofColor inner;
		ofColor outer;
};

