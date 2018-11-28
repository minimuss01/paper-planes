#include "ofApp.h"

ofxAssimpModelLoader model;

//--------------------------------------------------------------
void ofApp::setup() {
	ofEnableDepthTest();
	ofEnableSmoothing();
	model.loadModel("model/paper_plane.obj");
	// set up camera
	camEasy.setTarget(node_paper_planes);
	camEasy.setDistance(25);
	camEasy.setNearClip(10);
	camEasy.setFarClip(10000);

	node_paper_planes.init(100);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(50, 50, 50, 0);
	camEasy.begin();
	ofSetColor(255, 255, 255, 255);
	ofDrawRotationAxes(MAX_RADIUS, 0.1f);
	ofDrawGrid(2.0f, 10, true, true, true, true);
	node_paper_planes.customDraw();
	camEasy.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
