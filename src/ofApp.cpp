#include "ofApp.h"
#include "ofMain.h"

ofFbo fbo, spFbo;
ofColor ball(100,0,200);
ofColor black(0,0,0);


//--------------------------------------------------------------
void ofApp::setup(){
    
    // macs by default run on non vertical sync, which can make animation very, very fast
    // this fixes that:
    ofSetVerticalSync(true);
    
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F); // higher precision alpha (no artifacts)
    spFbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);
    
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();
    
    spFbo.begin();
    ofClear(255,255,255, 0);
    spFbo.end();
    
    ofSetBackgroundColor(black);
    


	// set background: 
	ofEnableAlphaBlending();
//	ofBackground(30,30,30);

	// set the position of the rectangle:
	myRectangle.pos.x = 100;
	myRectangle.pos.y = 50;
    
    myRedcircle.pos.x = 200;
    myRedcircle.pos.y = 100;
    
//    myOrangetriangle.pos.x = 240;
//    myOrangetriangle.pos.y = 240;
    
    
    myEllipse.setup();
    myOrangetriangle.setup();
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
	myRectangle.zenoToPoint(mouseX, mouseY);
    myRedcircle.zenoToPoint(mouseX, mouseY);
//    myOrangetriangle.zenoToPoint(mouseX, mouseY);
    myEllipse.update();
    myOrangetriangle.update();
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    fbo.begin();
    ofSetColor(black, 10); // background color with alpha  / change color for halo effect
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofSetColor(ball);
    
    myRectangle.draw();
    myEllipse.draw();
    myRedcircle.draw();
    myOrangetriangle.draw();
    
    fbo.end();
    
    spFbo.begin();  // write the existing fbo to the scratchpad but a bit smaller
    ofSetColor(255,255,255);  // always set the color before drawing the fbo
    fbo.draw(10, 10, ofGetWidth()-20, ofGetHeight()-20);
    spFbo.end();
    
    fbo = spFbo;    // write the scratchpad back to the original
    
    ofSetColor(255,255,255);  // always set the color before drawing the fbo
    fbo.draw(0,0);

	
   
    

}
