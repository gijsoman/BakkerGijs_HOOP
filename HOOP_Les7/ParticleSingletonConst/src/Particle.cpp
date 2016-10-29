#include "Particle.h"



Particle::Particle(int startX, int startY)
{
	//Initialize variables
	radius = ofRandom(0, 20);
	position = ofPoint(startX, startY);

	speed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));

	innerColor = ofColor(ofRandom(0, 123), ofRandom(0, 123), 0, 130);
	outerColor = ofColor(0, 0, ofRandom(0, 123), 15);
	//life time starts at 0 and builds up later on
	lifetime = 0;
}


Particle::~Particle()
{
}

const void Particle::setColors(ofColor center, ofColor inner, ofColor outer)
{
	centerColor = center;
	outerColor = outer;
	innerColor = inner;
}

void Particle::move()
{
	position += speed;
	//add to the lifetime so it gets bigger step by step.
	lifetime++;
}

void Particle::draw()
{
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 2.0);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}

//bool function that gives back true if the lifetime exceeds the max lifetime
bool Particle::dead()
{
	return lifetime > LIFETIME;
}
