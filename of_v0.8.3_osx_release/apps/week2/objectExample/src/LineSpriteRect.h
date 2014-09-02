//
//  LineSpriteRect.h
//  objectExample
//
//  Created by Emery Martin on 8/30/14.
//
//
#pragma once
#ifndef __objectExample__LineSpriteRect__       //if the class hasn't been definted yet
#define __objectExample__LineSpriteRect__       //prevents multiple compiles

//#include <iostream>
#include "ofMain.h"

class LineSpriteRect{
    
public:     //public functions and vars
    LineSpriteRect();       //default constructor that is required
    LineSpriteRect(float, float , float , float, float, int);   //overloaded constructor for args with data types
    
    
    float x, y, w, h, randRange;    //vars for x/y pos, width and height, how much randomness
    int strokeCount;    //how many stroke lines to draw
    
    
    //Methods that will use the public vars
    void update();      //update method for object
    void draw(bool);       //draw method for object
    
};

#endif /* defined(__objectExample__LineSpriteRect__) */
