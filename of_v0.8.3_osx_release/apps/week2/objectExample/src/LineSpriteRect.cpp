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
}


void LineSpriteRect::update(){
    
    
    
}


void LineSpriteRect::draw(bool mode){
    
    if(mode){
        
        ofPushMatrix();     //Push the current coordinate system to save for later pop
        
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
}

