//openFrameworks Overview App
//Intro app that goes over some basic setup, draw, and interaction topics for TX from Processing
//For: Tech301: Programming for Visual Media
//By: Emery C. Martin 08/2014

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);             //sets the framerate of the app
    ofSetVerticalSync(true);        //sets VSync on or off. On prevents tearing within drawing, but decreases speed.
    ofSetFullscreen(false);         //sets fullscreen on or off.
    ofSetWindowShape(1280, 720);    //sets the size of the draw window
    
    ofEnableSmoothing();
    
    ofSetBackgroundAuto(true);      //sets the background to update every frame
    ofBackground(100, 150, 100);    //sets the background color
    
    //init my global vars
    x = 0;
    y = 0;
    r = 40;
    rate = 1;
    mInc = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    rate*=1.1;      //speed change calculated every frame
    
    x+=rate;        //new x pos based off rate change
    y+=rate/2;        //new y pos based off half the rate change
}

//--------------------------------------------------------------
void ofApp::draw(){
    //Drawing our top R corner moving circle
    ofSetColor(255, 0, 0);  //ofSetColor sets the fill color for an oF shape
    ofFill();
    ofCircle(x, y, r);  //draw a circle at x,y, radius of r
    
    //Drawing our bottom L corner moving circle
    ofSetColor(200,0,100);
    ofCircle(ofGetWidth()-x,ofGetHeight()-y,r);
    //ofGetWidth returns width of sketch
    //ofGetHeight returns the height of the sketch
    
    //Drawing out center Line
    ofSetColor(255);
    ofSetLineWidth(10.0);
    ofLine(ofGetWidth()/2, 0, ofGetWidth()/2, ofGetHeight());
    
    //Drawing our center Rect with an Alpha
    ofSetColor(255, 0, 0, 100);
    ofRect(ofGetWidth()/2-r*2,ofGetHeight()/2-r*2,r*4,r*4);     //ofRect of shape left corner draw
    
    //Drawing our FPS using ofDrawBitmapString
    ofSetColor(0);
    //draw a bitmapped string on screen using the default oF typeface.
    //ofToString converts a number to a string
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"FPS", 10, ofGetHeight()-10);
    
    //Drawing our mouse interactive Ellipse
    ofSetColor(255);
    //draw fill ellipse to smooth things
    //ofEllipse(ofGetMouseX(), ofGetMouseY(), r+mInc*0.75, r+mInc);

    ofNoFill();             //set to have only an outline drawn
    ofSetLineWidth(1.0);    //set the outlines line width a la processing strokeWeight
    ofEllipse(ofGetMouseX(), ofGetMouseY(), r+mInc*0.75, r+mInc);

    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    //print out the key pressed using cout (class in c)
    // << denotes a stream
    //parents allow for a hardcoded string to be used then concat'd w/another stream (<<)
    //pass the key local var and then finish with endl ='s end of line carriage return
    //prints the DEC value of the key pressed
    cout << "keyPressed " << key << endl;
    
    //if the c key is pressed set the circle resolution to 100
    if(key == 'c'){
        ofSetCircleResolution(100);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    //this time casting the key into a char to avoid having to look up DEC vals
    cout << "keyReleased " << (char)key << endl;
    
    //if the c key is released set the circle resolution back to default of 20
    if(key == 'c'){
        ofSetCircleResolution(20);
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    cout << "mouse has been pressed" << endl;
    
    mInc+=10;       //var to control the size of our ofEllipse
    
    cout << "mInc inrecement increased by 10" << endl;
    cout << "Current mInc Value = " << mInc << endl;
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
