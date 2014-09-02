//
//  LineSpriteRect.cpp
//  objectExample
//
//  Created by Emery Martin on 8/30/14.
//
//

#include "LineSpriteRect.h"

//default constructor that is required
LineSpriteRect::LineSpriteRect(){
    
}
//overloaded constructor for args passed in by local private vars
LineSpriteRect::LineSpriteRect(float fx, float fy, float fw, float fh, float f_randRange, int i_strokeCount){
    //Init Public Vars
    x=fx;
    y=fy;
    w=fw;
    h=fh;
    randRange=f_randRange;
    strokeCount = i_strokeCount;
    
    //white color set
    //*
    r = 255;
    g = 255;
    b = 255;
    //*/
    
    //random color mode
    /*
    r = ofRandom(0,255);
    g = ofRandom(0,255);
    b = ofRandom(0,255);
    */
    
    cout<<"LineSpriteRect Generated"<<endl;
}


void LineSpriteRect::update(){
    
    
    
}


void LineSpriteRect::draw(bool mode){
    int a = 150;    //set alpha does not change
    //int a = ofRandom(50,255);   //random alpha value
    
    ofSetColor(r, g, b, a);     //set the color for the rect
    
    if(mode){
        
        ofPushMatrix();     //Push the current coordinate system to save for later pop
    
        //seeding random x and y positions for lines center point
        int xC = ofRandom(0,ofGetWidth());
        int yC = ofRandom(0,ofGetHeight());
        
        ofTranslate(xC,yC);       //translate the coordinate space to center
        
        //Draw rects from individual lines with built in random variations
        for(int i=0; i < strokeCount; i++){
            
            ofLine(ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange), ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange));    //top
            
            ofLine(ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange), ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange));    //bottom
            
            ofLine(ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange), ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange));    //left
            
            ofLine(ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange), ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange));    //right
            
        }
        
        ofPopMatrix();      //Pop coordinate system back
        
    }else{
        
        ofPushMatrix();     //Push the current coordinate system to save for later pop
        
        ofTranslate(ofGetWidth()/2,ofGetHeight()/2);       //translate the coordinate space to center
        
        
        //Draw rects from individual lines with built in random variations
        for(int i=0; i < strokeCount; i++){
            
            ofLine(ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange), ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange));    //top
            
            ofLine(ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange), ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange));    //bottom
            
            ofLine(ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange), ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange));    //left
            
            ofLine(ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange), ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange));    //right
            
        }
        
        ofPopMatrix();      //Pop coordinate system back
        
    }
    
    //cout<<"LineSpriteRect Drawn To Screen"<<endl;
}

