#include "WeirdParticle.hpp"

WeirdParticle::WeirdParticle(int startX, int startY) : Particle(startX, startY) {
    weird = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
}

WeirdParticle::~WeirdParticle() {
}

void WeirdParticle::move() {
    position += speed;
    weird.rotate(100);
    position += weird;
}
