//
// Created by dixq on 2024/04/18.
//

#include "PrepareScene.h"
#include "Define.h"
#include "DxLib.h"
#include "Data.h"

bool PrepareScene::loop() {
    int x=0, y=0;
    GetTouchInput(0,&x, &y, NULL, NULL);
    if(x>0 && x<=120 && y>0 && y<=80){
        return false;
    }

    if(isHit(x, y)){

    } else if (!(x==0&&y==0)) {
        Data::getIns().objectList.emplace_back(make_shared<Object>(x, y, OBJ_SIZE));
    }

    DrawBox(0,0,120,80,GetColor(255,255,255), TRUE);
    DrawString(20,10,"OK",GetColor(0,0,0));

    int color = GetColor(255,0,0);
    for(auto p : Data::getIns().objectList){
        DrawCircle(p->x, p->y, OBJ_SIZE, color, TRUE);
    }

    return true;
}

bool PrepareScene::isHit(float x, float y) {
    for(auto p : Data::getIns().objectList){
        float w = p->x - x;
        float h = p->y - y;
        float r = OBJ_SIZE/2;
        if(w*w+h*h<r*r){
            return true;
        }
    }
    return false;
}
