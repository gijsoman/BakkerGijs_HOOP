#pragma once


#include "Particle.h"

class ParticleEmitter {
    public:
        void setOrigin(int x, int y);

        void setCurvingParticleRatio(float ratio);

		void setRotatingParticleRatio(float rotio);

        void setColours(ofColor innerColour, ofColor outerColor);

        Particle* emit();

    private:
        int originX;
        int originY;
        float curvingParticleRatio;
		float circularParticleRatio;
        ofColor inner;
        ofColor outer;
};

