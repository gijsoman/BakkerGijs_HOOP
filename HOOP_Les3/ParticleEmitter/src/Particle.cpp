#include "Particle.h"
#include "ofMain.h"


Particle::Particle()
{
}

void Particle::setup(ofPoint pos, ofVec2f sp, int centerRad, ofColor centerCol)
{
	speed = sp;
	centerRadius = centerRad;
	innerRadius = centerRadius / 2;
	outerRadius = centerRadius * 2;
	innerColor = ofColor(255,255,255);
	centerColor = centerCol;
	outerColor = ofColor(centerColor, 40);
	position = pos;
}

void Particle::update()
{
	position += speed;

}

void Particle::draw()
{
	ofSetCircleResolution(100);
	ofSetColor(centerColor);
	ofDrawCircle(position, centerRadius);
	ofSetColor(innerColor);
	ofDrawCircle(position, innerRadius);
	ofSetColor(outerColor);
	ofDrawCircle(position, outerRadius);
}

void Particle::sayHello()
{
	cout << "Hello" << endl;
}