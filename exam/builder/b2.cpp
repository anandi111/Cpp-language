#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class s1
{
	private:
		int id;
		char name[100];
		int age;
	
	public:
	
	void setdata()
	{
		cout<<"enter id: ";	
		cin>>this->id;
		cout<<"enter name: ";
		fflush(stdin);
		gets(this->name);
		cout<<"enter age:";
		cin>>age;	
	}
	
	void getdata()
	{
		cout<<"id: "<<this->id<<endl;
		cout<<"name: "<<this->name<<endl;
		cout<<"age: "<<this->age<<endl;
	}	
};

class s2
{
	private:
		char course[100];
		static char clg[100];
		static char city[100];
	s1 d;
	
	public:
		
	void setdata1()
	{
		d.setdata();
		
		cout<<"enter course: ";
		fflush(stdin);
		gets(this->course);
		
	}
	
	void getdata1()
	{
		d.getdata();
		
		cout<<"course: "<<this->course<<endl;
		cout<<"collage: "<<clg<<endl;
		cout<<"city: "<<city<<endl;	
	}
};

char s2::clg[100]="RNW";
char s2::city[100]="surat";

int main()
{
	s2 d1[100];
	int n,i;
	
	cout<<"enter howmany student: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		d1[i].setdata1();	
	}
	
	for(i=0;i<n;i++)
	{
		d1[i].getdata1();	
	} 
}



