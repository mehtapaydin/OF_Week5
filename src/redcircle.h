//
//  redcircle.h
//  Assignment_Week5
//
//  Created by Mehtap Aydin on 2/22/17.
//
//

#ifndef redcircle_h
#define redcircle_h

#include "ofMain.h"

class redcircle {
    
public:
    
    redcircle();
    
    void setup();
    void update();
    void draw();
    void zenoToPoint(float catchX, float catchY);
    
    ofPoint		pos;
    float		catchUpSpeed;		// take this pct of where I want to be, and 1-catchUpSpeed of my pos
};


#endif /* redcircle_h */
