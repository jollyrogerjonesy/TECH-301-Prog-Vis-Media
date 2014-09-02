#pragma once

#include "ofMain.h"
#include "LineSpriteRect.h"

//#define numSprites 10       //fixed defined amount that is immutable

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //user params
    LineSpriteRect sprite1, sprite2, sprite3;   //LineSpriteRect Objects
		
    bool sp1,sp2,sp3;   //bools to toggle states of our 3 LineSpriteRects
    
    //array of LineSpriteRects with a size of numSprites
    //LineSpriteRect sprites[numSprites];
};
