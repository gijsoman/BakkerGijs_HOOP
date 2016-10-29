#include "ParticleDeleter.h"

//iterator walks through the vector of particles(list of particles) if it finds a particle with lifetime that is exceeded
// it kills that particle and erases it from the vector (list)
void ParticleDeleter::cleanUp(vector<Particle*>& particles)
{
	for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();)
	{
		if ((*it)->dead()) {
			delete *it;
			it = particles.erase(it);
		}
		else {
			++it;
		}
	}

}