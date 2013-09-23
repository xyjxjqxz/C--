#include<iostream>
using namespace std;
double cexchangef()
{
	double c;
	double f;
	cout<<"请输入摄氏温度\n";
	cin>>c;
	f=c/5*9+32;
	return f;
}

double fexchangec()
{
	double c;
	double f;
	cout<<"请输入华氏温度\n";
	cin>>f;
	c=(f-32)/9*5;
	return c;
}

int main(){
	int a;
	cout<<"1.摄氏温度转化为华氏温度\n2.华氏温度转化为摄氏温度\n请选择1或2"<<endl;
	cin>>a;
	switch(a)
	{
	case 1:
		cout<<"华氏温度为"<<cexchangef()<<endl;
		break;
	case 2:
		cout<<"摄氏温度为"<<fexchangec()<<endl;
		break;
	default:
		cout<<"输入错误";
	}
	return 0;
}