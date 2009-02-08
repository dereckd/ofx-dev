#ifndef _TEST_APP
#define _TEST_APP


#define OF_ADDON_USING_OFXBAZAR

#include "ofMain.h"
#include "ofAddons.h"

class testApp : public ofBaseApp {
	
	public:
		
		void setup();
		void update();
		void draw();
		
		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
		ofVideoGrabber	 			vidGrabber;
		ofxBazARDetector		 	detector;
};

#endif	
