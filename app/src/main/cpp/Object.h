//
// Created by dixq on 2024/04/18.
//

#ifndef DXLIB_OBJECT_H
#define DXLIB_OBJECT_H


class Object {
public:
    float x, y, size;
    Object(float x, float y, float size){
        this->x = x;
        this->y = y;
        this->size = size;
    }
};


#endif //DXLIB_OBJECT_H
