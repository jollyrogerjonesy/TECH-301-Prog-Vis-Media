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
    
    double a,b;             //angle and increment
    ofPoint pos, lastPos;   //drawing positions
    ofColor color;          //color
    int colorStep;          //counter color changing
    ofFbo fbo;              //drawing buffer
    void draw1();           //draw a line segment
		
};
