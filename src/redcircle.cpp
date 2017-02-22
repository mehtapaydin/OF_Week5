//
//  redcircle.cpp
//  Assignment_Week5
//
//  Created by Mehtap Aydin on 2/22/17.
//
//

#include "redcircle.hpp"
#include "redcircle.h"

//------------------------------------------------------------------
redcircle::redcircle(){
    catchUpSpeed = 0.02f;
}

//------------------------------------------------------------------
void redcircle::setup() {
    

}

//------------------------------------------------------------------
void redcircle::update() {
    

}

//------------------------------------------------------------------
void redcircle::draw() {
    
    
    ofFill();

    ofSetColor(216,36,45);
    ofDrawCircle(pos.x, pos.y, 40);
}

//------------------------------------------------------------------
void redcircle::zenoToPoint(float catchX, float catchY){
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
}
