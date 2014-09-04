#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofSetFrameRate(60);
    
    ofSetBackgroundAuto(true);      //set the background to refresh every frame
    ofBackground(0);                //set the background color to black
    ofHideCursor();                 //turn off the cursor visibility
    
    cout<<"Are FBO's Supported? "<<ofFbo::checkGLSupport()<<endl;
    
    //INIT THE FBO
    fbo.allocate(ofGetWidth(),ofGetHeight(),GL_RGBA);   //set the FBO size to the same size as window
    //fbo.allocate(ofGetWidth()*2, ofGetHeight()*2);  //double sized fbo
    
    //Clear any residual data/artifacts in memory. This is not automatically cleared off GPU
    fbo.begin();
    ofClear(255, 255, 255,0);       //clears color and depth info and replaces with color
    fbo.end();
    
    //INIT VARS
    w = 18;
    h = 18;
    count = 0;
    degInc = 10;
    //END OF VAR INIT
    
    ofSetRectMode(OF_RECTMODE_CENTER);      //rect mode center
}

//--------------------------------------------------------------
void ofApp::update(){
    fbo.begin();    //must start our fbo
    fboDraw();      //do our drawing in the fbo
    fbo.end();      //close our fbo
}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.draw(ofGetWidth()/2,ofGetHeight()/2);   //draw the contents of the fbo to the screen
    
    //red rectangle that follows the mouse position
    ofFill();
    ofSetColor(255, 0, 0, 200);
    ofRect(mouseX,mouseY,100,100);          //rect that follows the cursor
}

//fboDraw - Function to Draw in the FBO
void ofApp::fboDraw(){
    //SETUP DRAW LOOK AND FEEL
    ofNoFill();
    ofSetLineWidth(2.0);
    ofSetColor(ofRandom(100,255),ofRandom(100,255),ofRandom(100,255));
    //ofSetColor(ofRandom(100,255),ofRandom(100,255),ofRandom(100,255),ofRandom(100,255));
    
    ofPushMatrix(); //save the coordinate system
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);   //translate the coordinate system to the center
    
    rotRecScale();      //draw the rects
    
    ofPopMatrix();      //pop the original coordinate system back
    
    count++;            //increment the count
}

//rotRectScale - Funciton to draw rotated rects
void ofApp::rotRecScale(){
    ofPushMatrix();     //save the coordinate system
    
    ofRotate(degInc);   //rotate the coordinate system by increment degInc
    
    ofRect(0, 0, w*count, h*count);     //draw a rect at the origin with count scaler w/h
    
    ofPopMatrix();      //pop the old coordinate system back
    
    degInc+=10;         //increment the rotation
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
