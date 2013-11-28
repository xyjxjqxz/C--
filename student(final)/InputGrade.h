#ifndef INPUTGRADE_H
#define INPUTGRADE_H
#include "MenuItem.h"

#include "WareHouse.h"
class InputGrade:public MenuItem{
public:
        InputGrade():MenuItem("Â¼Èë³É¼¨"){}
        bool act(){
                wareHouse.inputgrade();
                return false;
        }
};
#endif //INPUTGRADE_H