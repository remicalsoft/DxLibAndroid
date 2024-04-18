//
// Created by dixq on 2024/04/18.
//

#ifndef DXLIB_BULLET_H
#define DXLIB_BULLET_H

#include "DxLib.h"
#include "Data.h"
#include <math.h>

class Bullet {
private:
public:
    float x, y, ang, dispAng, v, rotateV, size;
    Bullet(float x, float y, float ang, float dispAng, float v, float rotateV, float size){
        this->x = x;
        this->y = y;
        this->ang = ang;
        this->dispAng = dispAng;
        this->v = v;
        this->rotateV = rotateV;
        this->size = size;
    }
    void update(){
        x += cos(ang)*v;
        y += sin(ang)*v;
        dispAng += rotateV;
    }
    void draw(){
        DrawRotaGraphF(x, y, size, dispAng, Data::getIns().hanabira, TRUE);
    }
};


#endif //DXLIB_BULLET_H
