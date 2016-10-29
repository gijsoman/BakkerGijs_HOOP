#pragma once

#include "Particle.h"
#include "CurvingParticle.h"

class ParticleDeleter
{
	public:
		void cleanUp(vector<Particle*>& particles);
};

