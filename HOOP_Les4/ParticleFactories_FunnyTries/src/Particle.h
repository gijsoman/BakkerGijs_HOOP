#pragma once


#include "ofMain.h"

class Particle {
    public:
        Particle(int startX, int startY);

        virtual void move();

        virtual void draw();

        void setColours(ofColor center, ofColor inner, ofColor outer);

	protected:
        ofPoint position;
        float radius;
        ofVec2f speed;
		long lifetime = 0;
     
        ofColor centerColour = ofColor::white;
        ofColor innerColour;
        ofColor outerColour;

};

