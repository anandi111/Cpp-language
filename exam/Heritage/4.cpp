//4. WAP to read and print employee information using multiple inheritance.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class emp_info1
{
	public:
		int id;
		char name[100];
		int age;
		int exe;
		int salary;
		
	public:
		
		void setdata1()
		{
			cout<<"enter id: ";	
			cin>>this->id;
			cout<<"enter name: ";
			fflush(stdin);
			gets(this->name);
			cout<<"enter age: ";	
			cin>>this->age;
			cout<<"enter experiance: ";	
			cin>>this->exe;
			cout<<"enter salary: ";	
			cin>>this->salary;
		}
};

class emp_info2
{
	public:
		char role[100];
		char city[100];
		char com_name[100];	
		
	public:
		
		void setdata2()
		{
			cout<<"enter role: ";
			fflush(stdin);
			gets(this->role);
			cout<<"enter city: ";
			fflush(stdin);
			gets(this->city);
			cout<<"enter company name: ";
			fflush(stdin);
			gets(this->com_name);
		}
};

class all_info: public emp_info1, public emp_info2
{
	public:
		
		void allinfo()
		{
			
			setdata1();
			setdata2();
			cout<<endl<<"Employee Information:"<<endl;
	    	cout<<"------------------------------"<<endl;
			cout<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"exeperiance: "<<this->exe<<endl;
			cout<<"salary: "<<this->salary<<endl;
			cout<<"role: "<<this->role<<endl;
			cout<<"city: "<<this->city<<endl;
			cout<<"company name: "<<this->com_name<<endl;
			cout<<"------------------------------"<<endl<<endl;
		}
};

int main()
{
	all_info d[100];
	int i,n;
	
	cout<<"How many Employee: ";
	cin>>n;
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		d[i].allinfo();
	}
	
	
	return 0;
}
