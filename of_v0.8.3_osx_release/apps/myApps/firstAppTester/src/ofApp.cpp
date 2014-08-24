#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);             //sets the framerate of the app
    ofSetVerticalSync(true);        //sets VSync on or off. On prevents tearing within drawing, but decreases speed.
    ofSetFullscreen(false);         //sets fullscreen on or off.
    ofSetWindowShape(1280, 720);    //sets the size of the draw window
    
    ofSetBackgroundAuto(true);      //sets the background to update every frame
    ofBackground(100, 150, 100);    //sets the background color
    
    //init my global vars
    x = 0;
    y = 0;
    r = 40;
    rate = 1;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    rate*=1.1;      //speed change calculated every frame
    
    x+=rate;        //new x pos based off rate change
    y+=rate/2;        //new y pos based off half the rate change
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 0, 0);  //ofSetColor sets the fill color for an oF shape
    
    ofCircle(x, y, r);  //draw a circle at x,y, radius of r
    
    ofSetColor(200,0,100);
    ofCircle(ofGetWidth()-x,ofGetHeight()-y,r);
    //ofGetWidth returns width of sketch
    //ofGetHeight returns the height of the sketch
    
    ofSetColor(255);
    ofLine(ofGetWidth()/2, 0, ofGetWidth()/2, ofGetHeight());
    
    ofSetColor(255, 0, 0, 100);
    ofRect(ofGetWidth()/2-r*2,ofGetHeight()/2-r*2,r*4,r*4);     //ofRect of shape left corner draw
    
    ofSetColor(0);
    //draw a bitmapped string on screen using the default oF typeface.
    //ofToString converts a number to a string
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"FPS", 10, ofGetHeight()-10);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    //print out the key pressed using cout (class in c)
    // << denotes a stream
    //parents allow for a hardcoded string to be used then concat'd w/another stream (<<)
    //pass the key local var and then finish with endl ='s end of line carriage return
    //prints the DEC value of the key pressed
    cout << "keyPressed " << key << endl;
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    //this time casting the key into a char to avoid having to look up DEC vals
    cout << "keyReleased " << (char)key << endl;
    
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
