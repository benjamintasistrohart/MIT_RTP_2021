#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//--------Trig set up for motion--------//

	//Constants    "_f" refers to anything that controls the path of the function
	float x = 500; //centered on canvas
	float y = 500; //centered on canvas
	float theta = ofDegToRad(120); //hard-coded hexagon
	float origin_theta = theta / 4;
	float theta_f = ofGetElapsedTimef();
	//float r = 135 + cos(PI*theta_f) * 120; //starting circle radius (global)
	
	//Trig motion controls and function
	/*
	Fun parts to play with: 
	the cropping value (if statement at end of each function
	The mirroring of function 2 (whether it's diagonally mirroed, or only one axis, or phase-shifted

	scaling of objects
	last thing I change (09/21/2021) was the scaling of the objects (scale_1/2) from cosine to sine

	*/
	//additive, amplitude, frequency modulation here

	float r_f = 250;
	float cosine_f = -1.2;
	float sine_f = 0.8;
	float mod = ofMap(sin(theta_f), -1, 1, 0, 1);

	//colors

	ofNoFill();
	ofSetLineWidth(1);
	ofColor red_1(255, 127 + 127 * sin((theta_f)), 127 + 127 * sin((theta_f)));

	//--------FUNCTION 1
	float x_f_1 = x + r_f * mod * cos((cos(theta_f) * theta_f) * cosine_f);
	float y_f_1 = y + r_f * mod * sin((sin(theta_f) * theta_f) * sine_f);

	//--------FUNCTION 2 (mirrored on y-axis)
	float x_f_2 = x - r_f * mod * cos((cos(theta_f) * theta_f) * cosine_f);
	float y_f_2 = y + r_f * mod * sin((-sin(theta_f) * theta_f) * sine_f);

	//--------BEGIN FUNCTION 1--------//
	for (int i = 0; i <1; i = i ++) {
		hex_point_1.push_back(ofPoint(x_f_1, y_f_1));
	}

	for (int i = 0; i < 1; i = i++) {
		scale_1.push_back(20 + sin(PI*theta_f) * 100);
	}

	for (int i = 0; i < hex_point_1.size(); i = i++) {
		float xo = hex_point_1[i].x;
		float yo = hex_point_1[i].y;
		float r = scale_1[i];
		//hexagon geometry
		ofSetColor(red_1);
		ofBeginShape();
			ofVertex(xo, yo + r);
			ofVertex(xo + r * cos(origin_theta), yo + r * sin(origin_theta));
			ofVertex(xo + r * cos(origin_theta), yo - r * sin(origin_theta));
			ofVertex(xo, yo - r);
			ofVertex(xo - r * cos(origin_theta), yo - r * sin(origin_theta));
			ofVertex(xo - r * cos(origin_theta), yo + r * sin(origin_theta));
		ofEndShape(true);

		if (hex_point_1.size() > int(8 * ofMap(sin(theta_f), -1, 1, 0, 2))) {
			hex_point_1.erase(hex_point_1.begin());
		}
		if (scale_1.size() > int(8 * ofMap(sin(theta_f), -1, 1, 0, 2))) {
			scale_1.erase(scale_1.begin());
		}
	}
	

	//--------END FUNCTION 1--------//

	//--------BEGIN FUNCTION 2--------//
	for (int i = 0; i < 1; i = i++) {
		hex_point_2.push_back(ofPoint(x_f_2, y_f_2));
	}

	for (int i = 0; i < 1; i = i++) {
		scale_2.push_back(20 + sin(PI*theta_f) * 100);
	}

	for (int i = 0; i < hex_point_2.size(); i = i++) {
		float xo = hex_point_2[i].x;
		float yo = hex_point_2[i].y;
		float r = scale_2[i];

		//hexagon geometry
		ofSetColor(red_1);
		ofBeginShape();
			ofVertex(xo, yo + r);
			ofVertex(xo + r * cos(origin_theta), yo + r * sin(origin_theta));
			ofVertex(xo + r * cos(origin_theta), yo - r * sin(origin_theta));
			ofVertex(xo, yo - r);
			ofVertex(xo - r * cos(origin_theta), yo - r * sin(origin_theta));
			ofVertex(xo - r * cos(origin_theta), yo + r * sin(origin_theta));
		ofEndShape(true);

		if (hex_point_2.size() > int(8 * ofMap(sin(theta_f), -1, 1, 0, 2))) {
			hex_point_2.erase(hex_point_2.begin());
		}
		if (scale_2.size() > int(8 * ofMap(sin(theta_f), -1, 1, 0, 2))) {
			scale_2.erase(scale_2.begin());
		}
	}


	//--------END FUNCTION 2--------//
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == ' ') {
		ofSetLineWidth(0);
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == ' ') {
		ofSetLineWidth(1);
	}
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
