#ifndef OUTWAREHOUSE_H
#define OUTWAREHOUSE_H

#include "MenuItem.h"

#include "WareHouse.h"
class OutWareHouse:public MenuItem{
public:
    OutWareHouse():MenuItem("ÍËÑ¡£¨É¾³ýÑ§Éú£©"){}
    bool act(){
        wareHouse.out();
        return false;
    }
    
};

#endif // OUTWAREHOUSE_H