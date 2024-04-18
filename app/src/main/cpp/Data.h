//
// Created by dixq on 2024/04/18.
//

#ifndef DXLIB_DATA_H
#define DXLIB_DATA_H

#include "DxLib.h"
#include "Object.h"
#include <list>

using namespace std;

class Data {
private:
    Data() = default;
    ~Data() = default;

public:

    int hanabira;
    list<shared_ptr<Object>> objectList;

    Data(const Data&) = delete;
    Data& operator=(const Data&) = delete;
    Data(Data&&) = delete;
    Data& operator=(Data&&) = delete;

    void load(){
        hanabira = LoadGraph("hanabira.png");
    }

    static Data& getIns() {
        static Data instance;
        return instance;
    }
};


#endif //DXLIB_DATA_H
