#ifndef EXIT_H
#define EXIT_H

#include<iostream>
#include"MenuItem.h"
using namespace std;
class Exit:public MenuItem{
public:
    Exit():MenuItem("�˳�����"){}
    bool act(){
        cout<<"�˳�����"<<endl;
        return true;
    }
};

#endif // EXIT_