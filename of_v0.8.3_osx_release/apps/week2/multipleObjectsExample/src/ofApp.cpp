#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1920, 1080);
    ofSetFullscreen(true);
    ofSetFrameRate(60);
    ofEnableSmoothing();
    
    //init of three LineSpriteRects
    sprite1 = LineSpriteRect(0, 0, ofRandom(50,600), ofRandom(50,600),50, 6);
    
    sprite2 = LineSpriteRect(0, 0, ofRandom(100,200), ofRandom(200,600),30, 4);
    
    sprite3 = LineSpriteRect(0, 0, ofRandom(500,800), ofRandom(400,800),40, 8);
    
    //init the sprite modes
    sp1 = false;
    sp2 = true;
    sp3 = false;
    
    ofSetBackgroundAuto(true);      //auto refresh the background
    ofBackground(0, 0, 0);
    
    //LineSpriteRect Array init
    /*
    for(int i = 0; i < numSprites; i++){
        sprites[i] = LineSpriteRect(0,0, ofRandom(50,800), ofRandom(50,800), ofRandom(20,60), ofRandom(4, 10));
    }
     */
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //call drawing functions for the 3 LineSpriteRects
    sprite1.draw(sp1);
    //cout<<"sprite 1 drawn"<<endl;
    sprite2.draw(sp2);
    //cout<<"sprite 2 drawn"<<endl;
    sprite3.draw(sp3);
    //cout<<"sprite 3 drawn"<<endl;
    
    /*
    //LineSpriteRect Array Display
    for(int i = 0; i < numSprites; i++){
        sprites[i].draw(ofRandom(0,1));
    }
     */
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
    //toggle a reverse of state for all sprites
    sp1=!sp1;
    sp2=!sp2;
    sp3=!sp3;
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
