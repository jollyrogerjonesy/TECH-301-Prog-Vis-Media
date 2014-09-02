#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofSetFrameRate(60);
    ofEnableSmoothing();
    
    sprite = LineSpriteRect(0, 0, 300, 300, 30, 6);     //init our LineSpriteRect object sprite
    
    spriteMode = false;     //set the initial mode for our LineSpriteRect object
    
    ofSetBackgroundAuto(true);
    ofBackground(0, 0, 0);      //draw background
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofBackground(0, 0, 0);      //draw background
    sprite.draw(spriteMode);    //call sprite draw method and pass the toggle for the draw mode
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
    spriteMode = !spriteMode;       //! sets to the opposite of a state
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
