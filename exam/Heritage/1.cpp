//1. WAP that defines a shape class with a constructor that gives
// value to width and height. The define two sub-classes triangle and rectangle, 
// that calculate the area of the shape area (). In the main, define two variables a triangle
// and a rectangle and then call the area() function in this two varibles.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class shape
{
	public:
		int width;
		int length;
		int	height;
		int base;
		float t, r;
		
		
	public:
		
		void setdata1()
		{
			cout<<"enter length: ";
			cin>>length;
			cout<<"enter width: ";
			cin>>width;
			cout<<endl;
		}
		
		void setdata2()
		{
			cout<<"enter height: ";
			cin>>height;
			cout<<"enter base: ";
			cin>>base;
			cout<<endl;
		}
};

class triangle: public shape
{

	public:	
	void area2()
	{
		t=0.5*height*base;
		cout<<"------------------------------"<<endl;
		cout<<"Area of triangle is "<<t<<endl;
		cout<<"------------------------------"<<endl;
	};
};

class rectangle: public shape
{
	public:
	void area1()
	{	
		r=length*width;
		cout<<"------------------------------"<<endl;
		cout<<"Area of rectangle is "<<r<<endl;
		cout<<"------------------------------"<<endl;
	};
};

int main()
{
	triangle d1;
	rectangle d2;
	
	d1.	setdata2();
	d1.area2();
	cout<<endl;
	
	d2.	setdata1();
	d2.area1();
	cout<<endl;
	
	
	return 0;
}
