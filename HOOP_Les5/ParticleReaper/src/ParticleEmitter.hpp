#pragma once


#include "Particle.hpp"

class ParticleEmitter {
public:
    void setOrigin(int x, int y);
    
    void setCurvingParticleRatio(float ratio);
    
    void setWeirdParticleRatio(float weirdRatio);
    
    void setColours(ofColor innerColour, ofColor outerColor);
    
    Particle* emit();
    
    Particle* emitWeird();
    
private:
    int originX;
    int originY;
    float curvingParticleRatio;
    float weirdParticleRatio;
    ofColor inner;
    ofColor outer;
};

