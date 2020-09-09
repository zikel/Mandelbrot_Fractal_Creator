//
// Created by Zike Lin on 2020-09-05.
//

#ifndef FRACTAL_CREATOR_BITMAPFILEHEADER_H
#define FRACTAL_CREATOR_BITMAPFILEHEADER_H

#include <cstdint>
using namespace std;

#pragma pack(2)

namespace caveofprogramming {

    struct BitmapFileHeader {
        char header[2]{'B', 'M'};
        int32_t fileSize;
        int32_t reserved{0};
        int32_t dataOffset;
    };
}

#endif //FRACTAL_CREATOR_BITMAPFILEHEADER_H
