#include "WareHouse.h"

#include <iostream>
#include<vector>
using namespace std;

WareHouse wareHouse;


void WareHouse::list()
{
    cout<<"-------��ѡѧ��-------"<<endl;
    cout<<"����\t"<<"ѧ��\t  "<<"�Ա�"<<endl;
    
        //C++11 ��������Ļ��ڷ�Χ��forѭ��������飡
    for(auto &item:students){
        cout<<item.getName()<<"\t"<<item.getSID()<<"\t  "<<item.getSex()<<endl;
    }
    cout<<"-------��ѡѧ��-------"<<endl;
}
void WareHouse::in(){
        Student temp;
    temp.input();
    Student* result = this->find(temp);
    if(result == NULL){
        this->students.push_back(temp);
    }
}

void WareHouse::out(){
        Student temp;
    temp.input();
    
    Student* result = this->find(temp);
    if(result==NULL){
        cout<<"����δѡ�˿Σ�"<<endl;
    }
        else{
                for(it=students.begin();it!=students.end();){
                if(it->equal(temp)){
                        students.erase(it);
                        break;
                }
                }
        }
}

Student* WareHouse::find(Student student){
    //��ͳ��forѭ�� 
        for(unsigned int i=0; i<this->students.size(); i++){
                if(students[i].equal(student)){
                    return &students[i];
                                }
        }
                return NULL;
}
void WareHouse::inputgrade(){
        for(unsigned int i=0; i<this->students.size(); i++){
        this->students[i].inputgra();
        }
}
