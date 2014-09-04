#pragma once

#include "ofMain.h"

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
    
    ofFbo fbo;     //frame buffer object to draw offscreen
    int w,h,count;  //vars for width, height, and count
    float degInc;   //degree incrementer
    
	void fboDraw();     //function for drawing in the FBO
    void rotRecScale();     //funciton to draw rotated rects
};
