#ifndef ENTERWAREHOUSE_H
#define ENTERWAREHOUSE_H

#include "MenuItem.h"

#include "WareHouse.h"
class EnterWareHouse:public MenuItem{
public:
    EnterWareHouse():MenuItem("ѡ�Σ����ѧ����"){}
    bool act(){
        wareHouse.in();
        return false;
    }
};

#endif // ENTERWAREHOUSE_H