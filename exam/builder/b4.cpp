#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Highschool
{
	private:
		int id;
		char name[100];
		int roll_no;
		int standard;
		int age;
		int contact;
		static char institute_name[100];
		char add[100];
		
	public:
		
		void setdata()
		{
			cout<<"enter id: ";	
			cin>>this->id;
			cout<<"enter name: ";
			fflush(stdin);
			gets(this->name);
			cout<<"enter roll name: ";	
			cin>>this->roll_no;
			cout<<"enter standard: ";	
			cin>>this->standard;
			cout<<"enter age: ";	
			cin>>this->age;
			cout<<"enter contact: ";	
			cin>>this->contact;
			cout<<"enter address: ";
			fflush(stdin);
			gets(this->add);
		}
		void getdata()
		{
			cout<<endl<<endl<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"roll no: "<<this->roll_no<<endl;
			cout<<"standard: "<<this->standard<<endl;
			cout<<"age: "<<this->age<<endl;
			cout<<"contact: "<<this->contact<<endl;
			cout<<"institute name: "<<institute_name<<endl;
			cout<<"address: "<<this->add<<endl;
		}
};



class Collage
{
	private:
		int id;
		char name[100];
		int roll_no;
		int standard;
		int age;
		int contact;
		static char institute_name[100];
		char add[100];
		
	public:
		
		void setdata()
		{
			cout<<"enter id: ";	
			cin>>this->id;
			cout<<"enter name: ";
			fflush(stdin);
			gets(this->name);
			cout<<"enter roll name: ";	
			cin>>this->roll_no;
			cout<<"enter standard: ";	
			cin>>this->standard;
			cout<<"enter age: ";	
			cin>>this->age;
			cout<<"enter contact: ";	
			cin>>this->contact;
			cout<<"enter address: ";
			fflush(stdin);
			gets(this->add);
		}
		void getdata()
		{
			cout<<endl<<endl<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"roll no: "<<this->roll_no<<endl;
			cout<<"standard: "<<this->standard<<endl;
			cout<<"age: "<<this->age<<endl;
			cout<<"contact: "<<this->contact<<endl;
			cout<<"institute name: "<<institute_name<<endl;
			cout<<"address: "<<this->add<<endl;
		}
};

char Highschool::institute_name[100]="RNW";
char Collage::institute_name[100]="RNW";

int main()
{
	Highschool d[100];
	Collage d1[100];
	int n1,n2,i;
	
	cout<<"enter high school student: ";
	cin>>n1;
	
	for(i=0;i<n1;i++)
	{
		fflush(stdin);
		d[i].setdata();	
	}
	
	for(i=0;i<n1;i++)
	{
		d[i].getdata();	
	}
	 
	cout<<endl<<"enter collage student: ";
	cin>>n2;
	
	for(i=0;i<n2;i++)
	{
		fflush(stdin);
		d1[i].setdata();	
	}
	
	for(i=0;i<n2;i++)
	{
		d1[i].getdata();	
	} 
	return 0;
}
