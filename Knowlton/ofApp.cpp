#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	img.load("liberty2.jpg");
	font.load("LazenbyCompLiquid.ttf", 40);

	ofSetBackgroundColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	int sampling_rate = 27;
	
	string text = "The_new_colossus_(by_eo_Laz\narus)_not_like_the_brazen_g\niant_of_Greek_fame,/with_co\nnquering_limbs_astride_from\n_land_to_land;/here_at_our_\nseawashed_sunset_gates_shal\nl_stand_a_mighty_woman_with\n_a_torch_whose_flame_is_the\n_imprisoned_lightning_and_h\ner_name/mother_of_exiles._F\nrom_her_beacon-hand/_glows_\nworld-wide_welcome;_her_mil\nd_eyes_command/the_airbridg\ned_harbor_that_twin_cities_\nframe_’keep_ancient_lands,_\nyour_storied_pomp!’_cries_s\nhe/with_silent_lips._’give_\nme_your_tired,_your_poor,/_\nyour_huddled_masses_yearnin\ng_to_breathe_free./_the_wre\ntched_refuse_of_your_teemin\ng_shore./send_these,_the_ho\nmeless,_tempest_to_tost_to_\nme,/_I_lift_my_lamp_beside_\nthe_golden_door!’_[this_poe\nm_was_written_in_1883_by_Am\nerican_poet_emma_Lazarus,_a";
	vector <string> text_by_line = ofSplitString(text, "\n");

	for (int k = 0; k < img.getWidth(); k += sampling_rate) {
		for (int m = 0; m < img.getHeight(); m += sampling_rate) {
			string split_text = text_by_line[(m / sampling_rate)];
			//string text_to_draw = split_text[(m / 27)];
			
			ofColor color = img.getColor(k,m);
			float brightness = color.getBrightness();
			ofSetColor(color);

			ofPushMatrix();
			ofTranslate(k, m);
			ofScale(ofMap(brightness, 255, 0, 0.1, 1));
			font.drawString(text_by_line[(m / sampling_rate)], k, m);
			ofPopMatrix();
		}
	}

	ofSetColor(255);
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
