//
// Created by Zike Lin on 2020-09-05.
//

#ifndef FRACTAL_CREATOR_MANDELBROT_H
#define FRACTAL_CREATOR_MANDELBROT_H

namespace caveofprogramming {
    class Mandelbrot {
    public:
        static const int MAX_ITERATIONS = 1000;
    public:
        Mandelbrot();
        virtual ~Mandelbrot();

        static int getIterations(double x, double y);   //不需要'static'在.cpp里
    };
}

#endif //FRACTAL_CREATOR_MANDELBROT_H
