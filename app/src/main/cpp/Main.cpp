//
// Created by dixq on 2024/04/18.
//

#include "Main.h"
#include "Data.h"
#include "Define.h"
#include "MathUtils.h"

void Main::onCreate() {
    SetFontSize(64);
    Data::getIns().load();
}

void Main::loop() {
    if(isPreparing){
        isPreparing = prepareScene.loop();
    } else {
        mainScene.loop();
    }

}
