#include "ofApp.h"

void ofApp::setup()
{
	ofBackground(ofColor::black);
	emit1 = ParticleEmitter();
	emit1.setOrigin(ofGetWindowWidth() / 2, ofGetWindowHeight()/2);
	emit1.setColors(ofColor(255, 0, 0), ofColor(0, 255, 0));
	emit1.setCurvingParticleRatio(0.1);

	emit2 = ParticleEmitter();
	emit2.setOrigin(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
	emit2.setColors(ofColor(255, 255, 0), ofColor(255, 0, 255));
	emit2.setCurvingParticleRatio(0.1);
}


void ofApp::update()
{
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}

	if (ofGetFrameNum() % 10 == 0) {
		Particle* freshParticle = emit1.emit();
		particles.push_back(freshParticle);

		Particle* freshParticle2 = emit2.emit();
		particles.push_back(freshParticle2);
	}

	del.cleanUp(particles);

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}


void ofApp::draw()
{
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}
}


void ofApp::keyPressed(int key)
{

}
