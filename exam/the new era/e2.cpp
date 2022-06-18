#include<iostream>
using namespace std;

class time
{
	public:
	int h1,h2,m1,m2,s1,s2;	
};

int main()
{
	time d;
	int a,b,c,e,s3,m3,h3;
	
	cout<<"enter first time: ";
	cin>>d.h1>>d.m1>>d.s1;
	cout<<"enter second time: ";
	cin>>d.h2>>d.m2>>d.s2;
	
	a=d.s1+d.s2;
	s3=a%60;
	b=a/60;
	c=d.m1+d.m2+b;
	m3=c%60;
	e=c/60;
	h3=d.h1+d.h2+e;
	
	cout<<"Addition of above time is "
		<<h3<<" hours "
		<<m3<<" minutes "
		<<s3<<" seconds ";
	
	return 0;
}
