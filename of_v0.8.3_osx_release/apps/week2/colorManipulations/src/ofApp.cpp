#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1280, 720);
    ofSetFrameRate(60);
    
    color = ofColor::yellow;        //set the color to oF's yellow
    
    colorBrite=color.getBrightness();
    cout<<"Brightness = "<<colorBrite<<endl;
    
    colorHue=color.getHue();
    cout<<"Hue = "<<colorHue<<endl;
    
    colorBrite=color.getSaturation();
    cout<<"Saturation = "<<colorSat<<endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    switch (adjMode) {
        case 0:
            cout<<"ADJUST HUE MODE"<<endl;
            adjHue();
            break;
        case 1:
            cout<<"ADJUST SATURATION MODE"<<endl;
            adjSat();
        case 2:
            cout<<"ADJUST BRIGHTNESS MODE"<<endl;
            adjBrite();
        default:
            break;
    }
    
    //adjBrite();
    //adjHue();
    //adjSat();
    
    ofBackground(color);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (adjMode < 2) {
        adjMode++;
    }else{
        adjMode = 0;
    }
    cout<<"adjMode = "<<adjMode<<endl;
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

//Function to adjust brightness based on mouse
void ofApp::adjBrite(){
    int mPosX = mouseX;
    
    colorBrite = ofMap(mPosX, 0, ofGetWidth(), 0.0, 255.0);
    
    color.setBrightness(colorBrite);    //set the color brightness to the current colorBrite val
}

//Function to adjust hue based on mouse
void ofApp::adjHue(){
    int mPosX = mouseX;
    
    colorHue = ofMap(mPosX, 0, ofGetWidth(), 0.0, 360.0);
    
    color.setHue(colorHue);    //set the color brightness to the current colorBrite val
}

//Function to adjust saturation based on mouse
void ofApp::adjSat(){
    int mPosY = mouseY;
    
    colorSat = ofMap(mPosY, 0, ofGetWidth(), 0.0, 360.0);
    
    color.setSaturation(colorSat);    //set the color brightness to the current colorBrite val
}