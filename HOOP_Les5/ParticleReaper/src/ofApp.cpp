#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);
    emitter1 = ParticleEmitter();
    emitter1.setOrigin(100, 100);
    emitter1.setColours(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));
    emitter1.setCurvingParticleRatio(0.1);
    
    emitter2 = ParticleEmitter();
    emitter2.setOrigin(400, 400);
    emitter2.setColours(ofColor(114, 240, 55, 127), ofColor(185, 250, 155, 15));
    emitter2.setCurvingParticleRatio(0.8);
    
    emitter3 = ParticleEmitter();
    emitter3.setOrigin(700, 100 );
    emitter3.setColours(ofColor(255, 255, 0, 127), ofColor(0, 255, 255, 15));
    emitter3.setWeirdParticleRatio(0.8);
}

void ofApp::update() {
    for (unsigned int i = 0; i < particles.size(); ++i) {
        particles[i]->move();
    }
    
    if (ofGetFrameNum() % 5 == 0) {
        Particle* freshParticle = emitter1.emit();
        particles.push_back(freshParticle);
        
        Particle* freshParticle2 = emitter2.emit();
        particles.push_back(freshParticle2);
        
        Particle* freshParticle3= emitter3.emitWeird();
        particles.push_back(freshParticle3);
    }
    
    ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
    for (unsigned int i = 0; i < particles.size(); ++i) {
        particles[i]->draw();
    }
}

void ofApp::keyPressed(int key) {
}