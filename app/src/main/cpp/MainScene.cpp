//
// Created by dixq on 2024/04/18.
//

#include "MainScene.h"
#include "Define.h"
#include "MathUtils.h"
#include "PrepareScene.h"

void MainScene::loop() {
    if(counter % 10 == 0){
        bulletList.emplace_back(make_shared<Bullet>(randf(SCREEN_W*1.2), -32, PI * 2 / 3+ randf2(PI/5), 0, 1+randf2(0.5), PI / 90+randf2(PI/180), 0.3+randf2(0.15)));
    }
    for (list<shared_ptr<Bullet>>::iterator it = bulletList.begin(); it != bulletList.end(); ) {
        if(isHit((*it)->x, (*it)->y)){
        } else {
            (*it)->update();
        }
        if(isOutOfScreen((*it)->x, (*it)->y)){
            it = bulletList.erase(it);
        } else {
            (*it)->draw();
            it++;
        }
    }
    counter++;
}

bool MainScene::isHit(float x, float y) {
    for(auto p : Data::getIns().objectList){
        float w = p->x - x;
        float h = p->y - y;
        float r = OBJ_SIZE;
        if(w*w+h*h<r*r){
            return true;
        }
    }
    return false;
}

bool MainScene::isOutOfScreen(float x, float y) {
    if(x<-32 || x>SCREEN_W+32 || y > SCREEN_H+32 || y<-32){
        return true;
    }
    return false;
}
