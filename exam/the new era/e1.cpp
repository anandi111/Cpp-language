#include<iostream>
using namespace std;

class Distance
{
	public:
	int d_f1;
	int d_f2;
	int d_i1;
	int d_i2;
	
};

int main()
{
	Distance d;
	int a,b,inch,foot;
	
	cout<<"enter first distance: ";
	cin>>d.d_f1>>d.d_i1;
	cout<<"enter second distance: ";
	cin>>d.d_f2>>d.d_i2;
	
	a=d.d_i1+d.d_i2;
	b=a/12;
	inch=a%12;
	foot=d.d_f1+d.d_f2+b;
	
	cout<<"total of above distance is "
	    <<foot<<" foot "
	    <<inch<<" inch.";
	
	return 0;
}
