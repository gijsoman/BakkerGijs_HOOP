#pragma once

#include "Particle.h"

class ParticleEmitter
{
	public:
		static ParticleEmitter* instance();

		void setOrigin(int x, int y);

		void setCurvingParticleRatio(float ratio);

		void setColors(ofColor innerColor, ofColor outerColor);

		//point to the adress. it gets a value from where it is pointed to.
		Particle* emit();

	private:
		ParticleEmitter();

		int originX;
		int originY;
		float curvingParticleRatio;
		ofColor inner;
		ofColor outer;

		static ParticleEmitter* theOnlyOne;
};

