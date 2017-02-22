//
//  orangetriangle.cpp
//  Assignment_Week5
//
//  Created by Mehtap Aydin on 2/22/17.
//
//

#include "orangetriangle.hpp"
#include "orangetriangle.h"
#include "ofMain.h"

float mX = 0;
float mY = 0;

//------------------------------------------------------------------
orangetriangle::orangetriangle(){
     catchUpSpeed = 0.03f;
}


//------------------------------------------------------------------
void orangetriangle::setup() {
    
    x = ofRandom(0, ofGetWidth());      // give some random positioning
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 1);           // and random speed and direction
    speedY = ofRandom(-1, 1);
}

//------------------------------------------------------------------
void orangetriangle::update() {
    if(x < 0 ){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    x+=speedX;
    y+=speedY;
}


//------------------------------------------------------------------
void orangetriangle::draw() {
    
    ofFill();

    ofSetColor(235,93,47);
    ofDrawTriangle(x,y,x-40,y+40,x+40,y+40);
}



//------------------------------------------------------------------
//void orangetriangle::zenoToPoint(float catchX, float catchY){
//    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
//    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
//}
