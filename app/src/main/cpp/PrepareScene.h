//
// Created by dixq on 2024/04/18.
//

#ifndef DXLIB_PREPARESCENE_H
#define DXLIB_PREPARESCENE_H

#include <list>
#include "Object.h"

using namespace std;

class PrepareScene {
    bool isHit(float x, float y);
public:
    bool loop();
};


#endif //DXLIB_PREPARESCENE_H
