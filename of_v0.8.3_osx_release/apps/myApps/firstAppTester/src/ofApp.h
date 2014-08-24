#pragma once    //Compiler directive to compile once. Must be present in all header files.

#include "ofMain.h"     //Include all oF's core classes and functions

class ofApp : public ofBaseApp{     //Class extends the ofBaseApp. All oF apps are extending ofBaseApp.
    //all built in default functions within an oF app. DO NOT MODIFY THESE.
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
        //Add any user defined fucntions after the base functions. If you're going to use it in ofApp.cpp you must decalre it here along with data types.
    
        //global vars
        int x;  //x pos
        int y;  //y pos
        int r;  //radius
        float rate;   //movement rate
};
