#pragma once

#include "ofMain.h"

// helper functions that can be
// used from all playground scenes
class ofxPlaygroundHelpers {
    public:
        void drawScatter(ofPolyline shape,
            glm::vec2 scatter_amount, int num_copies, float seed,
            ofColor col, float lineWidth );

        void drawConcentric(ofPolyline shape, float size,
            ofColor col, float lineWidth );

        void drawParticleFlow(ofPolyline shape, float width, float wrapHeight,
            int pNum, glm::vec2 pSize, ofColor col, float seed );

        ofPolyline generateSubidividedSquare(int resolution);
        ofPolyline generateSubidividedLine(int resolution);

};

