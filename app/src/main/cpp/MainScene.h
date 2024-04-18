//
// Created by dixq on 2024/04/18.
//

#ifndef DXLIB_MAINSCENE_H
#define DXLIB_MAINSCENE_H

#include <list>
#include "Bullet.h"

using namespace std;

class MainScene {
private:
    int counter = 0;
    list<shared_ptr<Bullet>> bulletList;
    bool isHit(float x, float y);
public:
    void loop();
    bool isOutOfScreen(float x, float y);
};


#endif //DXLIB_MAINSCENE_H
