#include "ofApp.h"

void ofApp::setup()
{
	ofBackground(ofColor::black);
	emitter = ParticleEmitter::instance();
	emitter->setOrigin(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
	emitter->setColors(ofColor(255, 255, 0, 130), ofColor(255, 255, 0, 13));
	emitter->setCurvingParticleRatio(0.1);
}


void ofApp::update()
{
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}

	if (ofGetFrameNum() % 10 == 0) {
		Particle* freshParticle = emitter->emit();
		particles.push_back(freshParticle);
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
