#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableDepthTest(); //深度テストを有効
    ofEnableSmoothing(); //表示を滑らかにする
    
    light.enable();
    light.setPointLight();
    light.setPosition(0, 0, 0);
    light.setAmbientColor(ofFloatColor(0.1, 0.1, 0.5, 1.0)); //環境反射光
    light.setDiffuseColor(ofFloatColor(0.5, 0.5, 1.0)); //拡散反射光
    light.setSpecularColor(ofFloatColor(1.0, 1.0, 1.0)); //鏡面反射光
    
    gui.setup("parameters", "setting.xml");
    gui.add(f.setup("div_f", 15, 1, 360));
    gui.add(t.setup("div_t", 15, 1, 360));
    //図形の位置
    box.set(200);
    box.setPosition(0, 0, 0);
    ofSetFrameRate(154);
   
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    
    ofSetColor(255);
    box.drawWireframe();
    ofSetColor(255, 255, 255, 150);
    box.draw();
    
    for(int i = 0; i < sphere_f; i++){
        for(int j = 0; j < sphere_t; j++){
            
                sphere[i][j].setRadius(20);
            if(i%3 == 1) sphere[i][j].setRadius(40);
            
                sphere[i][j].setPosition(radius*sin(fai*i)*cos(theta*j), radius*sin(fai*i)*sin(theta*j), radius*cos(fai*i));
            
                sphere[i][j].draw();
        
            }
    }
    
    cam.end();
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
