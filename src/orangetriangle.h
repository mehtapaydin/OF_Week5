//
//  orangetriangle.h
//  Assignment_Week5
//
//  Created by Mehtap Aydin on 2/22/17.
//
//

#ifndef orangetriangle_h
#define orangetriangle_h
#include "ofMain.h"


class orangetriangle {
    
public:
    
    orangetriangle();
    
  
    float x;
    float y;
    float speedX;
    float speedY;
    void setup();
    void update();
    void draw();
  
    void zenoToPoint(float catchX, float catchY);
    
    ofPoint		pos;
    float		catchUpSpeed;		// take this pct of where I want to be, and 1-catchUpSpeed of my pos
};


#endif /* orangetriangle_h */
