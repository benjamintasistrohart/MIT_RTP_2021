#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(252, 252, 213);

	//ofSetLineWidth(2);
	ofNoFill();
	ofSeedRandom(mouseX * 23242);

	int cellSize = 95;
	int width = 24;
	int height = 6;
	float jitter = (float(mouseY) / 400)*0.2;
	float scale = 25;

	ofColor line_1;
	line_1.r = 184;
	line_1.g = 108;
	line_1.b = 110;
	line_1.a = 120;
	ofSetColor(line_1);

	ofColor line_2;
	line_2.r = 6;
	line_2.g = 8;
	line_2.b = 25;
	line_2.a = 140;
	ofSetColor(line_2);

	//Zone Controls
	int zOne = 7;
	int zTwo = 5;
	int zThree = 5;

	//Zone Bounds
	int zOneBound = width - zOne - 1;
	int zTwoBound = zOneBound - zTwo;
	int zThreeBound = zTwoBound - zThree;


	/*-----Red Lines-----*/
	//Zone 1
	for (int i = zOneBound; i < width; i++) {
		for (int j = 0; j < height; j++) {
			float x = ofMap(i, 0, width - 1, 50, 2265);
			float y = ofMap(j, 0, height - 1, 50, 630);

			for (int k = 0; k < 1; k++) {
				if (ofRandom(0, 1) < 0.95) {

					float theta = ofRandom(-360, 360);
					float mag = ofRandom(0, cellSize / 4);
					float thetaRad = ofDegToRad(theta);
					float yhat = mag * sin(thetaRad);
					float xhat = mag * cos(thetaRad);

					ofSetColor(line_1);
					ofSetLineWidth(2);

					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofEndShape(true);
				}
				else {

					ofSetColor(line_1);
					ofSetLineWidth(2);
					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofEndShape(true);
				}
			}
		}
	}

	//Zone 2
	for (int i = zTwoBound; i < zOneBound; i++) {
		for (int j = 0; j < height; j++) {
			float x = ofMap(i, 0, width - 1, 50, 2265);
			float y = ofMap(j, 0, height - 1, 50, 630);

			for (int k = 0; k < 2; k++) {
				if (ofRandom(0, 1) < 0.95) {

					float theta = ofRandom(-360, 360);
					float mag = ofRandom(0, cellSize / 4);
					float thetaRad = ofDegToRad(theta);
					float yhat = mag * sin(thetaRad);
					float xhat = mag * cos(thetaRad);

					ofSetColor(line_1);
					ofSetLineWidth(2);

					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofEndShape(true);
				}
				else {

					ofSetColor(line_1);
					ofSetLineWidth(2);
					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofEndShape(true);
				}
			}
		}
	}

	//Zone 3
	for (int i = zThreeBound; i < zTwoBound; i++) {
		for (int j = 0; j < height; j++) {
			float x = ofMap(i, 0, width - 1, 50, 2265);
			float y = ofMap(j, 0, height - 1, 50, 630);

			for (int k = 0; k < 5; k++) {
				if (ofRandom(0, 1) < 0.95) {

					float theta = ofRandom(-360, 360);
					float mag = ofRandom(0, cellSize / 4);
					float thetaRad = ofDegToRad(theta);
					float yhat = mag * sin(thetaRad);
					float xhat = mag * cos(thetaRad);

					ofSetColor(line_1);
					ofSetLineWidth(2);

					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofEndShape(true);
				}
				else {

					ofSetColor(line_1);
					ofSetLineWidth(2);
					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofEndShape(true);
				}
			}
		}
	}

	//Zone 4
	for (int i = 0; i < zThreeBound; i++) {
		for (int j = 0; j < height; j++) {
			float x = ofMap(i, 0, width - 1, 50, 2265);
			float y = ofMap(j, 0, height - 1, 50, 630);

			for (int k = 0; k < 12; k++) {
				if (ofRandom(0, 1) < 0.95) {

					float theta = ofRandom(-360, 360);
					float mag = ofRandom(0, cellSize / 4);
					float thetaRad = ofDegToRad(theta);
					float yhat = mag * sin(thetaRad);
					float xhat = mag * cos(thetaRad);

					ofSetColor(line_1);
					ofSetLineWidth(2);

					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofEndShape(true);
				}
				else {

					ofSetColor(line_1);
					ofSetLineWidth(2);
					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofEndShape(true);
				}
			}
		}
	}

	/*-----Black Lines-----*/
		//Zone 2
	for (int i = zTwoBound; i < zOneBound; i++) {
		for (int j = 0; j < height; j++) {
			float x = ofMap(i, 0, width - 1, 50, 2265);
			float y = ofMap(j, 0, height - 1, 50, 630);

			for (int k = 0; k < 1; k++) {
				if (ofRandom(0, 1) < 0.95) {

					float theta = ofRandom(-360, 360);
					float mag = ofRandom(0, cellSize / 4);
					float thetaRad = ofDegToRad(theta);
					float yhat = mag * sin(thetaRad);
					float xhat = mag * cos(thetaRad);

					ofSetColor(line_2);
					ofSetLineWidth(2);

					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofEndShape(true);
				}
				else {

					ofSetColor(line_2);
					ofSetLineWidth(2);
					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofEndShape(true);
				}
			}
		}
	}

	//Zone 3
	for (int i = zThreeBound; i < zTwoBound; i++) {
		for (int j = 0; j < height; j++) {
			float x = ofMap(i, 0, width - 1, 50, 2265);
			float y = ofMap(j, 0, height - 1, 50, 630);

			for (int k = 0; k < 4; k++) {
				if (ofRandom(0, 1) < 0.95) {

					float theta = ofRandom(-360, 360);
					float mag = ofRandom(0, cellSize / 4);
					float thetaRad = ofDegToRad(theta);
					float yhat = mag * sin(thetaRad);
					float xhat = mag * cos(thetaRad);

					ofSetColor(line_2);
					ofSetLineWidth(2);

					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofEndShape(true);
				}
				else {

					ofSetColor(line_2);
					ofSetLineWidth(2);
					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofEndShape(true);
				}
			}
		}
	}

	//Zone 4
	for (int i = 0; i < zThreeBound; i++) {
		for (int j = 0; j < height; j++) {
			float x = ofMap(i, 0, width - 1, 50, 2265);
			float y = ofMap(j, 0, height - 1, 50, 630);

			for (int k = 0; k < 8; k++) {
				if (ofRandom(0, 1) < 0.95) {

					float theta = ofRandom(-360, 360);
					float mag = ofRandom(0, cellSize / 4);
					float thetaRad = ofDegToRad(theta);
					float yhat = mag * sin(thetaRad);
					float xhat = mag * cos(thetaRad);

					ofSetColor(line_2);
					ofSetLineWidth(2);

					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + yhat);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + ofRandom(0, 1)*scale + xhat, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) - ofRandom(0, 1)*scale + yhat);
					ofEndShape(true);
				}
				else {

					ofSetColor(line_2);
					ofSetLineWidth(2);
					ofBeginShape();
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofVertex(x + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale, y + cellSize + ofRandom(cellSize*-jitter, cellSize * jitter) + 1 * scale);
					ofEndShape(true);
				}
			}
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
