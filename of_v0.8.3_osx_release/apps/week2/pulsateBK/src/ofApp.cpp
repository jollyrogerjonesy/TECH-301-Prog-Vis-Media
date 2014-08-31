#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    float time = ofGetElapsedTimef();       //returns time in seconds
    
    float value = sin(time*M_TWO_PI);       //get periodic value between -1 and 1 with a wavelength = 1sec
    //float value = sin(time*M_PI);
    
    float v = ofMap(value, -1,1,0,255);     //map to 0-255 for RGB range
    
    ofBackground(v, v, v);                  //set the background to the mapped value of v
    
    printDateTime();
}

//printDateTime - Own Function
//Notice
void ofApp::printDateTime(){
    //other oF Time Functions. These do not count elapsed just provide current system time props. Additional time functions can be found in the reference.
    cout<<ofGetMonth()<<"/"<<ofGetDay()<<"/"<<ofGetYear()<<" "<< ofGetHours()<<":"<< ofGetMinutes()<<":"<<ofGetSeconds()<< endl;
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
