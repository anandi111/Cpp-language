//2. WAP with a mother class and an inherited daugther class.Both of them should have a
// method void display() that prints a message (different for mother and daugther). 
// In the main define a daughter and call the display() method on it.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class mother
{
	public:
		
		void display1()
		{
			cout<<"	MOTHER DETAILS:"<<endl;
			cout<<"	------------------------------"<<endl;
			cout<<"	Name: Sangitaben Chovatiya"<<endl;
			cout<<"	Age: 35"<<endl;
			cout<<"	Weight : 60kg"<<endl;
			cout<<"	Height : 5feet"<<endl;
			cout<<"	Hobby: cooking, planting, travelling"<<endl;
			cout<<"	------------------------------"<<endl;
		}
		
};

class daugther: public mother
{
	public:
		
		void display2()
		{
			cout<<"	DAUGHTER DETAILS:"<<endl;
			cout<<"	------------------------------"<<endl;
			cout<<"	Name: Anandi Chovatiya"<<endl;
			cout<<"	Age: 17"<<endl;
			cout<<"	Weight : 45kg"<<endl;
			cout<<"	Height : 5.1feet"<<endl;
			cout<<"	Hobby: coding, planting, travelling"<<endl;
			cout<<"	------------------------------"<<endl;
		}
		
};

int main()
{
	daugther d1;
	
	d1.display1();
	cout<<endl<<endl;
	d1.display2();
	return 0;
}

