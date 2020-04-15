#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    You can name your address whatever you want.
    
//    ofxPublishOsc(<#const std::string &ip#>, <#std::uint16_t port#>, <#const std::string &address#>, <#ValueOrFunction &&valueOrFunction#>)
    
    ofxPublishOsc(IP, PORT, "/time", time);
    ofxPublishOsc(IP, PORT, "/pos2", pos2);
    ofxPublishOsc(IP, PORT, "/pos3", pos3);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    time = ofGetElapsedTimef();
    pos2 = glm::vec2(mouseX, mouseY);
    pos3 = glm::vec3(sin(0.4 * time) * 100, 0, cos(0.4 * time) * 100);
}

//--------------------------------------------------------------
void ofApp::draw(){

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
