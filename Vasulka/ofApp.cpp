#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	grabber.listDevices();
	grabber.setDeviceID(0);
	grabber.setup(640, 480);

	ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){
	grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

	//grabber.draw(grabber.getWidth(), 0);

	cam.begin();
	//cam.enableOrtho();

	for (int j = 0; j < grabber.getHeight(); j += 10) {
		ofPolyline line;
		ofSetLineWidth(10);
		for (int i = 0; i < grabber.getWidth(); i+=15) {
			float brightness = grabber.getPixels().getColor(i,j).getBrightness();
			line.addVertex(i-grabber.getWidth()/2, 
							grabber.getHeight()-j-1 - grabber.getHeight()/2, 
							ofMap(brightness, 0, 255, 0, 80));
		}
		line.draw();
	}
	
	cam.end();
	

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
