#include<iostream>
using namespace std;
double cexchangef()
{
	double c;
	double f;
	cout<<"�����������¶�\n";
	cin>>c;
	f=c/5*9+32;
	return f;
}

double fexchangec()
{
	double c;
	double f;
	cout<<"�����뻪���¶�\n";
	cin>>f;
	c=(f-32)/9*5;
	return c;
}

int main(){
	int a;
	cout<<"1.�����¶�ת��Ϊ�����¶�\n2.�����¶�ת��Ϊ�����¶�\n��ѡ��1��2"<<endl;
	cin>>a;
	switch(a)
	{
	case 1:
		cout<<"�����¶�Ϊ"<<cexchangef()<<endl;
		break;
	case 2:
		cout<<"�����¶�Ϊ"<<fexchangec()<<endl;
		break;
	default:
		cout<<"�������";
	}
	return 0;
}