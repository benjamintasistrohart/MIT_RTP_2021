#include "ofApp.h"
#include <cmath>

//--------------------------------------------------------------
void ofApp::setup(){

	font.load("Helvetica.ttf", 120, true, true, true);
		
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofColor blue(2, 141, 192);
	ofSetColor(blue);

	ofColor orange(239, 112, 79);
	ofSetColor(orange);

	ofSetBackgroundColor(blue);

	int vertical_spacing = 210;
	int vertical_padding = 40;
	int font_height = 150;
	int horizontal_extent = 120;
	int draw_n_times = 5;

	/*-----WORKING-----*/
	/*
	ofSetColor(orange);
	vector <ofPath> paths = font.getStringAsPoints("chicken butt");
	for (int i = 0; i < paths.size(); i++) {
		paths[i].draw();
	}
	*/

	float mouse_y_color_mod = ofMap(ofGetMouseY(), 0, 870, 0, 255);
	float jitter = ofGetMouseX() / 100;

	for (int i = 0; i < draw_n_times; i++) {
		ofSetColor(255,255,255,mouse_y_color_mod);

		float remap = ofMap(i, 0, draw_n_times - 1, 0, 1);

		font.drawString("TEACHING", 50 + horizontal_extent * (1 * pow(remap, 2)) + ofRandom(-jitter * i, jitter * i), 40 + font_height + 0 * vertical_spacing + ofRandom(-jitter / 4 * i, jitter / 4 * 1));
		font.drawString("CHILDREN", 50 + horizontal_extent * (1 * pow(remap, 2)) + ofRandom(-jitter * i, jitter * i), 40 + font_height + 1 * vertical_spacing + ofRandom(-jitter / 4 * i, jitter / 4 * 1));
		font.drawString("THINKING", 50 + horizontal_extent * (1 * pow(remap, 2)) + ofRandom(-jitter * i, jitter * i), 40 + font_height + 2 * vertical_spacing + ofRandom(-jitter / 4 * i, jitter / 4 * 1));

	}

	ofSetColor(orange);
	font.drawString("TEACHING", 400, 40 + font_height + 0 * vertical_spacing);
	font.drawString("CHILDREN", 400, 40 + font_height + 1 * vertical_spacing);
	font.drawString("THINKING", 440, 40 + font_height + 2 * vertical_spacing);

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
