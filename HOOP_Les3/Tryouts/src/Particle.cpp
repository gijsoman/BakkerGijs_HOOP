#include "Particle.h"
#include "ofMain.h"


Particle::Particle()
{
}

void Particle::setup()
{
	position = ofPoint(ofRandom(0, ofGetWidth() /2), ofRandom(0, ofGetWidth() / 2));
	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
	centerRadius = ofRandom(20, 50);
	innerRadius = centerRadius / 2;
	outerRadius = centerRadius * 2;
	innerColor = ofColor(255,255,255);
	centerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
	outerColor = ofColor(centerColor, 40);
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