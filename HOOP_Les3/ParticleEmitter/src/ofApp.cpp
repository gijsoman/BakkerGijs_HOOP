#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	emit1.setup();
	emit2.setup();
	emit3.setup();
	emit4.setup();
	//for (int i = 0; i < AANTALPARTICLES; i++)
	//{
	//	circle1[i].setup();
	//}

}

//--------------------------------------------------------------
void ofApp::update(){
	emit1.update();
	emit2.update();
	emit3.update();
	emit4.update();
	//for (int i = 0; i < AANTALPARTICLES; i++)
	//{
	//	circle1[i].update();
	//}
}

//--------------------------------------------------------------
void ofApp::draw(){
	emit1.draw();
	emit2.draw();
	emit3.draw();
	emit4.draw();
	//for (int i = 0; i < AANTALPARTICLES; i++)
	//{
	//	circle1[i].draw();
	//}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
