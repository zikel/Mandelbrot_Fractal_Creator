//
// Created by Zike Lin on 2020-09-06.
//

#ifndef FRACTAL_CREATOR_ZOOMLIST_H
#define FRACTAL_CREATOR_ZOOMLIST_H

#include <vector>
#include <utility>
#include "Zoom.h"

using namespace std;
namespace caveofprogramming {
    class ZoomList {
    private:
        double _xCenter{0};
        double _yCenter{0};
        double _scale{1.0};

        int _width{0};
        int _height{0};
        vector<Zoom> zooms;
    public:
        ZoomList(int width, int height);
        void add(const Zoom &zoom);
        pair<double, double> doZoom(int x, int y);
    };
}

#endif //FRACTAL_CREATOR_ZOOMLIST_H
