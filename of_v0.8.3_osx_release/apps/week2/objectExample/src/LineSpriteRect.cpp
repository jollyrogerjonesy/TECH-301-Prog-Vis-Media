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


void LineSpriteRect::draw(){

    ofPushMatrix();
    
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    
    
    
    for(int i=0; i < strokeCount; i++){
        
        ofLine(ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange), ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange));    //top
        
        ofLine(ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange), ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange));    //bottom
        
        ofLine(ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange), ofRandom(x-w/2, (x-w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange));    //left
        
        ofLine(ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(x-h/2, (x-h/2)+randRange), ofRandom(x+w/2, (x+w/2)+randRange), ofRandom(y+h/2, (y+h/2)+randRange));    //right
        
    }
    
    ofPopMatrix();
}

