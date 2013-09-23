#include<iostream>
using namespace std;
int c(int m,int n)
{
	int t=m;
	int s=n;
	int t0=m;
	int s0=n;
	for(int i=1;i<n;i++)
	{
		t=t*(t0-1);
		s=s*(s0-1);
		t0=t0-1;
		s0=s0-1;
	}
	return t/s;
	
}

int main()
{
	int a;
	int b;
	cout<<"ÇëÊäÈëmºÍn\n";
	cin>>a;
	cin>>b;
	if(a<b)
	{
		cout<<"ÊäÈë´íÎó\n";
	}
	else
	{
		cout<<c(a,b)<<endl;
	}
	return 0;
}