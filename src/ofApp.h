#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#define NUM 100

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    ofSpherePrimitive sphere[9000][9000];
    ofBoxPrimitive box;
    ofEasyCam cam;
   
    //Gui setting
//    ofxPanel gui;
//    ofxFloatSlider specular_light;
//    ofxFloatSlider diffuse_light;
//    ofxFloatSlider ambient_light;
//    ofxFloatSlider specular_material;
//    ofxFloatSlider diffuse_material;
//    ofxFloatSlider ambient_material;
//    ofxFloatSlider emmisive_matrial;
    
    //light
    ofLight light;
    ofMaterial material;
    ofFbo fbo;
    
    
    ofxPanel gui;
    ofxIntSlider f;
    ofxIntSlider t;
    
    //極座標的に配置
    int radius = 200;
    int fai = (360/f)*180/PI;
    int theta = (360/t)*180/PI;
    int sphere_f = 360/f;
    int sphere_t = 360/t;
};
