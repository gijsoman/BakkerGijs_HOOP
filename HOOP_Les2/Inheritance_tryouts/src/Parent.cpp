#include "Parent.h"



Parent::Parent()
{
}

void Parent::SayHigh()
{
	cout << "Hello" << endl;
}

void Parent::drawCircle()
{
	ofSetColor(255, 0, 0);
	ofDrawCircle(100, 100, 50);
}