#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofBackground(225);

	ofColor gray(5);
	ofSetColor(gray);

	int cell_size = 50;
	int padding = 25;

	for (int i = 0; i < 28; i++) {
		for (int j = 0; j < 16; j++) {

			//vertices

			int x = cell_size * i + padding;
			int y = cell_size * j + padding;
			int x_int = x + cell_size;
			int y_int = y + cell_size;

			//selection logic
			int selector = (j) % 4; 
			if (ofRandom(0, 1) < 0.65) {
				selector = selector + 1;
			}
			else {
				selector = selector;
			}
			
			//int selector = int(ofRandom(0, 2)) + (i+j) % 4;
			
			//int selector = int(ofRandom(0, 4));

			if (selector == 0) {
				int mod = int(ofRandom(0, 2));
				ofDrawTriangle(x, y, x, y_int, x_int, y + cell_size * mod);
			}

			if (selector == 1) {
				int mod = int(ofRandom(0, 2));
				ofDrawTriangle(x, y, x_int, y, x + cell_size * mod, y_int);
			}

			if (selector == 2) {
				int mod = int(ofRandom(0, 2));
				ofDrawTriangle(x_int, y, x_int, y_int, x, y + cell_size * mod);
			}

			if (selector == 3) {
				int mod = int(ofRandom(0, 2));
				ofDrawTriangle(x_int, y_int, x, y_int, x + cell_size * mod, y);
			}

			selector = 0;
		}
	}


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
