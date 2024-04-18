//
// Created by dixq on 2024/04/18.
//

#ifndef DXLIB_MAIN_H
#define DXLIB_MAIN_H

#include <list>
#include "Bullet.h"
#include "MainScene.h"
#include "PrepareScene.h"

using namespace std;

class Main {

private:
    int counter = 0;
    bool isPreparing = true;
    MainScene mainScene;
    PrepareScene prepareScene;

public:
    void onCreate();
    void loop();
};


#endif //DXLIB_MAIN_H
