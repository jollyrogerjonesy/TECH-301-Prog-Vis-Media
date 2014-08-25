//Week 1: Pendulum Example
//Tech 301: Programming for Visual Media
//By: Denis Perevalov
//Mods: Emery C. Martin

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofSetFrameRate(60);     //set the framerate
    
    //init global vars
    pos0 = ofPoint(ofGetWidth()/2,0);
    pos = ofPoint(600,200);
    velocity = ofPoint(200,0);
}

//--------------------------------------------------------------
void ofApp::update(){
    //constants
    float dt = 1.0/60.0;     //time setup
    float mass = 0.1;        //mass of ball
    float rubberLen = 300.0;    //rubber length
    float k = 0.5;              //segments stiffness
    ofPoint g(0.0,9.8);     //force of gravity
    
    //compute hooke's force
    ofPoint delta = pos - pos0;
    float len = delta.length();     //vectors length aka distance between ball and suspension pt
    float hookeValue = k * (len - rubberLen);
    delta.normalize();              //normalize vector to a unit vector
    ofPoint hookeForce = delta * (-hookeValue);
    
    //update velocity and position
    ofPoint force = hookeForce+g;   //resulting force
    ofPoint a = force/mass;         //Newton 2nd law
    velocity += a * dt;             //Euler Method
    pos += velocity * dt;           //Euler Method
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);      //set the background to white
    
    ofSetColor(0, 0, 255);  //set the rubber color
    ofLine(pos0.x,pos0.y,pos.x,pos.y);      //draw the line representing rubber
    
    ofSetColor(255, 0, 0);  //set the ball color
    ofFill();               //enable filling
    ofCircle(pos.x, pos.y, 20);     //draw the circle ball
    
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
