#pragma once

#include "ofMain.h"
#include "Parent.h"
#include "Child.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		Parent vader;
		Child kind;
		
};
