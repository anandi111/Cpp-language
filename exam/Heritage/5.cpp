//5. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class info
{
	protected:
		int n;
		
		void num()
		{
			cout<<endl<<"	Enter Number: ";
			cin>>n;
		}	
};

class square: public info
{
	public:
		int s1;
	
	void s()
	{
		num();
		s1=n*n;
		cout<<"	------------------------------"<<endl;
		cout<<"	square of "<<n<<" is "<<s1<<endl;
		cout<<"	------------------------------"<<endl<<endl;
	}
};

class cube: public info
{
	public:
		int s2;
	
	void c()
	{
		num();
		s2=n*n*n;
		cout<<"	------------------------------"<<endl;
		cout<<"	cube of "<<n<<" is "<<s2<<endl;
		cout<<"	------------------------------"<<endl<<endl;
	}
};

int main()
{
	square d1;
	cube d2;
	
	d1.s();
	d2.c();
	return 0;
}
