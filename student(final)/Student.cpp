#include"Student.h"
#include<iostream>
using namespace std;
void Student::input(){
        cout<<"����: "<<endl;
        cin>>this->name;
        cout<<"ѧ�ţ�"<<endl;
        cin>>this->SID;
        cout<<"�Ա�"<<endl;
        cin>>this->sex;
}
void Student::inputgra(){
        cout<<"����������ĳɼ���"<<endl;
        cin>>this->grade;
}