//
// Created by Zike Lin on 2020-09-06.
//

#ifndef FRACTAL_CREATOR_FRACTALCREATOR_H
#define FRACTAL_CREATOR_FRACTALCREATOR_H

#include <string>
#include <cstdint>
#include <memory>
#include <cmath>
#include <vector>
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "Bitmap.h"
#include "cmath"
#include "RGB.h"
using namespace std;

namespace caveofprogramming {
    class FractalCreator {
    private:
        int m_width;
        int m_height;
        unique_ptr<int[]> m_histogram;
        unique_ptr<int[]> m_fractal;
        Bitmap m_bitmap;
        ZoomList m_zoomlist;
        int m_total{0};
        vector<int> m_ranges;
        vector<RGB> m_colors;
        vector<int> m_rangeTotals;

        bool m_bGotFirstRange{false};

    private:
        void calculateIteration();
        void calculateTotalIteration();
        void calculateRangeTotals();
        void drawFractal();
        bool writeBitmap(string name);
        int getRange(int iterations) const;

    public:
        FractalCreator(int width, int height);
        virtual ~FractalCreator();

        void addRange(double rangeEnd, const RGB &rgb);

        void run(string name);
        void addZoom(const Zoom &zoom);
    };
}
#endif //FRACTAL_CREATOR_FRACTALCREATOR_H
