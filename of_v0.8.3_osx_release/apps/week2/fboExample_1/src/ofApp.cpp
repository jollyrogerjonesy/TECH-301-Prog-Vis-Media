#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1280, 720);
    ofSetFrameRate(60);
    //ofEnableSmoothing();
    
    fbo.allocate(ofGetWidth(), ofGetHeight());  //create a drawing buffer
    
    //fill the buffer with the color white
    fbo.begin();
    ofBackground(0);
    fbo.end();
    
    //init vars
    a = 0;
    b = 0;
    pos = ofPoint(ofGetWidth()/2,ofGetHeight()/2);  //pos is set to the center of the screen
    
    colorStep = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    fbo.begin();        //begin the frame buffer
    for(int i = 0; i < 200; i++){
        draw1();
    }
    fbo.end();

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);        //draw the background as white
    
    ofSetColor(255, 255, 255);          //set the draw color to white
    
    fbo.draw(0,0);                      //draw the frame buffer object at location 0,0 (this is top left corner)

}

//draw1 function
void ofApp::draw1(){
    a += b*DEG_TO_RAD;      //a holds measurements in radians and b holds things in degrees
    
    b = b+0.5;              //increment b
    
    lastPos = pos;          //set the last position to the last pos
    
    ofPoint d = ofPoint(cos(a), sin(a));
    
    float len = 30;
    
    pos += d*len;   //move the position
    
    //change the color after every 100 steps
    if (colorStep % 100 == 0) {
        color = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255));
    }
    
    colorStep++;      //increment the colorStep
    
    //draw the line
    ofSetColor(color);
    ofLine(lastPos, pos);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
