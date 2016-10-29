#pragma once

#include "Particle.h"

class ParticleDeleter
{
	public:
		void cleanUp(vector<Particle*>& particles);
};

