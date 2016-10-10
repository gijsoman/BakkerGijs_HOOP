#pragma once


#include "ofMain.h"
#include "Particle.hpp"

class WeirdParticle : public Particle {
public:
    WeirdParticle(int startX, int startY);
    virtual ~WeirdParticle();
    
    void move();
    
    ofVec2f weird;
};

