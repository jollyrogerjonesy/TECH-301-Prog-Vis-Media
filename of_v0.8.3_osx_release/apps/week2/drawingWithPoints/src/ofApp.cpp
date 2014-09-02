#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofSetFrameRate(60);
    ofEnableSmoothing();
    ofSetCircleResolution(100);
    
    p = ofPoint(ofGetWidth()/2,ofGetHeight()/2);   //init our ofPoint
    
    ofBackground(0);        //set the background
    
    //init the increments for moving the drawings
    xInc = 1.0;
    yInc = 0.75;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //screen bounds check for X
    if(p.x > ofGetWidth()-r || p.x < 0+r){
        xInc=xInc*(-1);
        xInc*=1.1;
        yInc*=1.1;
    }
    //screen bounds check for Y
    if(p.y > ofGetHeight()-r || p.y < 0+r){
        yInc=yInc*(-1);
        xInc*=1.1;
        yInc*=1.1;
    }
    
    //Increment X & Y position
    p.x+=xInc;
    p.y+=yInc;
    
    cout << "x=" << p.x <<" "<< "y=" << p.y << endl;
    cout << "xInc="<<xInc<<" "<<"yInc="<<yInc<< endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(255);
    
    //draw some circles with center at ofPoint p
    ofCircle(p, r);
    ofCircle(p, r/2);
    ofCircle(p,r/4);
    
    ofPushMatrix();                         //Push the coordinate system
    ofTranslate(p);                         //translate origin to ofPoint p
    ofRotate(45);                           //rotate the coordinate system by 45 degrees
    
    ofSetRectMode(OF_RECTMODE_CENTER);      //set the ofRectMode
    ofSetColor(255, 0, 0);
    ofRect(0,0,r,r);                        //draw some internal rects
    ofRect(0,0,r/2,r/2);
    ofRect(0,0,r/4,r/4);
    
    ofPopMatrix();                          //Pop the coordinate system back
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
