#pragma once

#include "ofMain.h"

class ofxPlaygroundScene {
    public:
        virtual void setup() = 0;
        virtual void update() = 0;
        virtual void draw() = 0;

        // target is displayed at mouse location when clicked
        // as well as at each touch location on mobile
        virtual void drawTarget(glm::vec2 pos) = 0;

        // helper functions that can be accessed from all scenes
        void drawScatter(ofPolyline shape,
            glm::vec2 scatter_amount, int num_copies, float seed,
            glm::vec4 color_rgba, float lineWidth );
        void drawConcentric(ofPolyline shape, float size,
            glm::vec4 color_rgba, float lineWidth );
        void drawParticleFlow(ofPolyline shape, float width, float wrapHeight,
            int pNum, glm::vec2 pSize, glm::vec4 color_rgba, float seed );
        ofPolyline generateSubidividedSquare(int resolution);
        ofPolyline generateSubidividedLine(int resolution);

    vector <glm::vec2> targets;

    // TODO: move scaleFactor to PlaygroundApp and give
    // PlaygroundScene a way to use (static func)
    float scaleFactor;
};

