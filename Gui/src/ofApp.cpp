#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    parameters.setName("parameters");
    parameters.add(radius.set("radius",50,1,100));
    parameters.add(color.set("color",100,ofColor(0,0),255));
    parameters.add(position.set("position", glm::vec3(0, 0, 0), glm::vec3(-1000, -1000, -1000), glm::vec3(1000, 1000, 1000)));
    gui.setup(parameters);
    gui.add(btn.setup("btn"));
    gui.add(tgl.setup("toggle", false));
    ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
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
