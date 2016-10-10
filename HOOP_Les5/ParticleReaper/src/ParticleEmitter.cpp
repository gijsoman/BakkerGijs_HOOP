#include "ParticleEmitter.hpp"
#include "CurvingParticle.hpp"
#include "WeirdParticle.hpp"

Particle* ParticleEmitter::emit() {
    Particle* newCurvingParticle;
    
    
    if (ofRandom(1) > (1 - curvingParticleRatio)) {
        newCurvingParticle = new CurvingParticle(originX, originY);
    } else {
        newCurvingParticle = new Particle(originX, originY);
    }
    

    
    newCurvingParticle->setColours(ofColor::white, inner, outer);
    return newCurvingParticle;
}

Particle* ParticleEmitter::emitWeird() {
    Particle* weirdCurvingParticle;
    
    
    if (ofRandom(1) > (1 - weirdParticleRatio)) {
        weirdCurvingParticle = new WeirdParticle(originX, originY);
    } else {
        weirdCurvingParticle = new Particle(originX, originY);
    }
    
    
    
    weirdCurvingParticle->setColours(ofColor::white, inner, outer);
    return weirdCurvingParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) {
    curvingParticleRatio = ratio;
}

void ParticleEmitter::setWeirdParticleRatio(float weirdRatio)
{
    weirdParticleRatio = weirdRatio;
}


void ParticleEmitter::setOrigin(int x, int y) {
    originX = x;
    originY = y;
}

void ParticleEmitter::setColours(ofColor innerColour, ofColor outerColor) {
    inner = innerColour;
    outer = outerColor;
}