#include<iostream>
using namespace std;
double mypower(double x,int y)
{
	double t;
	if(y==1)
	{
		t=x;
	}
	else
	{
		t=x*mypower(x,y-1);
	}
	return t;
}

int main()
{
	double a;
	int b;
	cout<<"���������x��ָ��y\n"<<"x:";
	cin>>a;
	cout<<"y:";
	cin>>b;
	cout<<mypower(a,b)<<endl;
	return 0;
}