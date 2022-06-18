#include<iostream>
using namespace std;

class time
{
	public:
		
	int s;	
};

int main()
{
	time d;
	int h,a,m,s;
	
	cout<<"enter seconds: ";
	cin>>d.s;
	
	h=d.s/3600;
	a=d.s%3600;
	m=a/60;
	s=a%60;
	
	cout<<"total time: "
		<<h<<" : "
		<<m<<" : "
		<<s;
		
	
	return 0;
}
