#include "CircularParticle.h"
#include "ofMain.h"


CircularParticle::CircularParticle()
{

}
void CircularParticle::sayHello()
{
	cout << "hoi" << endl;
}

void CircularParticle::setup()
{
	position = ofPoint(ofRandom(0, 2), ofRandom(0, 2));
	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
	centerRadius = ofRandom(10, 50);
	innerRadius = centerRadius / 2;
	outerRadius = centerRadius * 2;
	innerColor = ofColor(255, 255, 255);
	centerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
	outerColor = ofColor(centerColor, 40);
	random = ofRandom(100, 200);
	angleIncrease = ofRandom(0.01, 0.05);
}
void CircularParticle::update()
{
	if (angle < PI * 2)
	{
		angle += angleIncrease;
		position.x =  position.x + (sin(angle) * random);
		position.y =   position.y + (cos(angle) * random);
	}
	else
	{
		angle = 0;
	}

}
