//
// Created by Zike Lin on 2020-09-06.
//

#ifndef FRACTAL_CREATOR_RGB_H
#define FRACTAL_CREATOR_RGB_H

namespace caveofprogramming {
    struct RGB {
        double r;
        double g;
        double b;
    public:
        RGB(double r, double g, double b);

    };

    RGB operator-(const RGB &first, const RGB &second);
}

#endif //FRACTAL_CREATOR_RGB_H
