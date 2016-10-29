#include "ofApp.h"

void ofApp::setup()
{
	ofBackground(ofColor::black);
	emit1 = ParticleEmitter();
	emit1.setOrigin(0, 0, 0);
	emit1.setColors(ofColor(255, 0, 0), ofColor(0, 255, 0));
	emit1.setCurvingParticleRatio(0.1);

	emit2 = ParticleEmitter();
	emit2.setOrigin(0,0,0);
	emit2.setColors(ofColor(255, 255, 0), ofColor(255, 0, 255));
	emit2.setCurvingParticleRatio(0.1);

	//setup lighting
	light.setDirectional();
	light.setPosition(-200, -200, -200);
	light.lookAt(ofVec3f(0, 0, 0), ofVec3f(0, 0, 0));
	light.setDiffuseColor(ofColor::white);
	light.enable();
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

	emit1.move();
	emit2.move();

	del.cleanUp(particles);

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}


void ofApp::draw()
{
	ofEnableDepthTest();
	cam.begin();
	if (drawGrid) ofDrawGrid(200);
	if (drawLight) light.draw();
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}
	emit1.draw();
	emit2.draw();
	cam.end();
	ofDisableDepthTest();
}


void ofApp::keyPressed(int key)
{
	if (key == 'g')
	{
		drawGrid = !drawGrid;
	}
	if (key == 'l')
	{
		drawLight = !drawLight;
	}
}
