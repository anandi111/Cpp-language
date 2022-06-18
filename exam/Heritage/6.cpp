//6. WAP to read and print employee information with use of multilevel inheritance. 
//(as like in below image)

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class a
{
	protected:
		int id;
		char name[100];
		int exe;
		int salary;
		char role[100];
		char add[100];
		char com_name[100];
		char email[100];
		char contact_no[100];
		
	public:
		
		void setter1()
		{
			cout<<"enter id: ";	
			cin>>this->id;
			cout<<"enter name: ";
			fflush(stdin);
			gets(this->name);
			cout<<"enter role: ";
			fflush(stdin);
			gets(this->role);	
		}
};

class b: public a
{
	public:
		
		void setter2()
		{
			cout<<"enter salary: ";	
			cin>>this->salary;
			cout<<"enter experiance: ";	
			cin>>this->exe;	
		}
};

class c: public b
{
	public:
		
		void setter3()
		{
			cout<<"enter company name: ";
			fflush(stdin);
			gets(this->com_name);
			cout<<"enter address: ";
			fflush(stdin);
			gets(this->add);	
		}
		
		void getter1()
		{
			cout<<"------------------------------"<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"role: "<<this->role<<endl;
			cout<<"salary: "<<this->salary<<endl;
			cout<<"------------------------------"<<endl;
		}
};

class d: public c
{
	public:
		
		void setter4()
		{
			cout<<"enter email: ";
			fflush(stdin);
			gets(this->email);
			cout<<"enter contact no: ";
			fflush(stdin);
			gets(this->contact_no);	
		}
		
		void getter2()
		{
			cout<<"------------------------------"<<endl;
			cout<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"role: "<<this->role<<endl;
			cout<<"salary: "<<this->salary<<endl;
			cout<<"exeperiance: "<<this->exe<<endl;
			cout<<"company name: "<<this->com_name<<endl;
			cout<<"address: "<<this->add<<endl;
			cout<<"email: "<<this->email<<endl;
			cout<<"contact no: "<<this->contact_no<<endl;
			cout<<"------------------------------"<<endl;
		}	
};

int main()
{
	d obj[100];
	int i,n,c;
	
	cout<<"How many Employee: ";
	cin>>n;
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		obj[i].setter1();
		obj[i].setter2();
		obj[i].setter3();
		obj[i].setter4();
		cout<<endl;
	}
	
	do{
	
		cout<<"-------------------"<<endl;
		cout<<"	MENU"<<endl;
		cout<<"-------------------"<<endl;
		cout<<"[1] short information"<<endl;
		cout<<"[2] all information"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<"-------------------"<<endl;
		
		cout<<"enter choice: ";
		cin>>c;
		cout<<endl;
		
		for(i=0;i<n;i++)
		{
	
			if(c==1)
			{
				obj[i].getter1();
			}
			else if(c==2)
			{
				obj[i].getter2();
			}
		
		}
		
	}while(c!=0);
	
	return 0;
}

