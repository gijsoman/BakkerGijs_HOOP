#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	for (int i = 0; i < AANTALPARTICLES; i++)
	{
		circle1[i].setup();
	}

}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < AANTALPARTICLES; i++)
	{
		circle1[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < AANTALPARTICLES; i++)
	{
		circle1[i].draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
