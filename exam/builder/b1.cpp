
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

class employee
{
	private:
		int id;
		char name[100];
		char role[100];
		int salary;
		int exe;
	    char add[100];
	    char email[100];
	    int contact;
	
	public:
		
		void setdata()
		{
		
			cout<<"enter id: ";	
			cin>>this->id;
			cout<<"enter name: ";
			fflush(stdin);
			gets(this->name);
			cout<<"enter role: ";	
			cin>>this->role;
			cout<<"enter salary: ";	
			cin>>this->salary;
			cout<<"enter experiance: ";	
			cin>>this->exe;
			cout<<"enter address: ";
			fflush(stdin);
			gets(this->add);
			cout<<"enter email: ";
			fflush(stdin);
			gets(this->email);
			cout<<"enter contact: ";	
			cin>>this->contact;
		
		}
		
		void getdata()
		{
			cout<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"role: "<<this->role<<endl;
			cout<<"salary: "<<this->salary<<endl;
			cout<<"exeperiance: "<<this->exe<<endl;
			cout<<"address: "<<this->add<<endl;
			cout<<"email: "<<this->email<<endl;
			cout<<"contact: "<<this->contact<<endl;
		}
		
};

int main()
{
	employee d[100];
	int i,n;
	
	cout<<"how many employee: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		d[i].setdata();	
	} 
	
	for(i=0;i<n;i++)
	{
		d[i].getdata();	
	}
	
	return 0;
}
