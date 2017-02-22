#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "rectangle.h"
#include "ellipse.h"
#include "redcircle.h"
#include "orangetriangle.h"


class ofApp : public ofSimpleApp{

	public:

		void setup();
		void update();
		void draw();
  
    
    
		rectangle myRectangle;
        ellipse myEllipse;
        redcircle myRedcircle;
        orangetriangle myOrangetriangle;
};

#endif
