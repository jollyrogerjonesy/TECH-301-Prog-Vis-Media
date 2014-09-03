#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    
    //init colors
    //can also init with .r/.g.b syntax
    //also there are predefined colors in oF
    pedalCol = ofColor(255.0,255.0,255.0);
    lineCol = ofColor(255.0,0,0);
    backCol = ofColor(0,100,50);
    
    ofSetBackgroundAuto(true);
    ofBackground(backCol);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();     //save coordinate system
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);       //translate the origin to center of window
    
    float angle = ofGetElapsedTimef()*30;       //angle to rotate coordinate space by to get rotation of all pedals over time
    cout<<"angle = "<<angle<<endl;
    
    ofRotate(angle);        //provides animated rotation
    
    int petals = 20;        //number of pedals
    
    //draw the pedals
    for(int i = 0; i < petals; i++){
        ofRotate(360/petals);
        
        ofPoint p1(0,20);
        ofPoint p2(100,0);
        
        ofSetColor(pedalCol);
        ofTriangle(p1, -p1, p2);
    }
    
    ofPopMatrix();      //put back original coordinate system
    
    ofPushMatrix();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);       //translate the origin to center of window
    
    ofSetLineWidth(2.0);
    ofSetColor(lineCol);
    ofLine(0,0,100,0);  //no rotation
    
    ofRotate(40);       //rotation is 40 deg
    ofLine(0,0,100,0);
    
    ofRotate(10);       //rotatation is now 50 deg
    ofLine(0,0,100,0);
    
    ofRotate(10);       //rotatation is now 60 deg
    ofLine(0,0,100,0);
    
    ofRotate(10);       //rotatation is now 70 deg
    ofLine(0,0,100,0);
    
    ofRotate(10);       //rotatation is now 80 deg
    ofLine(0,0,100,0);
    
    ofRotate(10);       //rotatation is now 90 deg
    ofLine(0,0,100,0);
    
    ofPopMatrix();      //restore coordinate system
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
