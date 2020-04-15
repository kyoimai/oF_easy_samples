#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    model.loadModel("XXX.yyy");
    model.setScaleNormalization(false);
    mesh = model.getMesh(0);
    ofLogNotice() << mesh.getNumVertices();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();

    if(mode == 1) mesh.draw();
    if(mode == 2) mesh.drawFaces();
    if(mode == 3) mesh.drawWireframe();

    cam.end();
    
    ofDrawBitmapStringHighlight("key '1' : draw()\nkey '2' : drawFaces()\nkey '3' : drawWireframe()", 20, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case '1':
            mode = 1;
            break;
            
        case '2':
            mode = 2;
            break;
            
        case '3':
            mode = 3;
            break;
            
        default:
            break;
    }
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
