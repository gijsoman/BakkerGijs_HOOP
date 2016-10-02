#include "CurvingParticle.h"

CurvingParticle::CurvingParticle(int startX, int startY) : Particle(startX, startY) {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
}

void CurvingParticle::move() {
		position += speed;
		curve.rotate(2);
		position += curve;
		lifetime++;
}

void CurvingParticle::draw()
{
	if (lifetime < 100)
	{
		ofSetColor(outerColour);
		ofDrawCircle(position.x, position.y, radius * 2.0);

		ofSetColor(innerColour);
		ofDrawCircle(position.x, position.y, radius);

		ofSetColor(centerColour);
		ofDrawCircle(position.x, position.y, radius * 0.25);
	}
}