#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class a
{
	public:
		int id;
		char name[100];
		int age;
		int exe;
		int salary;
		char role[100];
		char email[100];
		static char com_name[100];
	
};

char a::com_name[100]="RNW";

class b: public a
{
	public:
		
		void setterB()
		{
			cout<<"enter id: ";	
			cin>>this->id;
			cout<<"enter name: ";
			fflush(stdin);
			gets(this->name);
			cout<<"enter age: ";	
			cin>>this->age;	
		}
		
		void getterB()
		{
			cout<<endl<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"exeperiance: "<<this->exe<<endl;
		}
};

class c: public b
{
	public:
		int age1;
		int choice;
		
		void setterC()
		{
			cout<<"enter experiance: ";	
			cin>>this->exe;
			cout<<"enter salary: ";	
			cin>>this->salary;
			cout<<"enter role: ";
			fflush(stdin);
			gets(this->role);
			cout<<"enter email: ";
			fflush(stdin);
			gets(this->email);	
		}
		
		void getAGEwisedata()
		{
			cout<<endl<<"enter age: ";
			cin>>age1;
			
			cout<<endl<<endl<<"-------------------------------"<<endl;
			cout<<"	MENU"<<endl;
			cout<<"-------------------------------"<<endl;
			cout<<"[1] "<<age1<<" up"<<endl;
			cout<<"[2] "<<age1<<" down"<<endl;
			cout<<"[3] "<<age1<<" equal"<<endl<<endl;
			
			cout<<"enter your choice: ";
			cin>>choice;
			cout<<endl;
		}
		
};

class d: public c
{
	public:
		int salary1;
		int choice1;
		
		void getterALLdata()
		{
			cout<<endl<<endl;
			getterB();
			cout<<"salary: "<<this->salary<<endl;
			cout<<"role: "<<this->role<<endl;
			cout<<"email: "<<this->email<<endl;
			cout<<"company name: "<<this->com_name<<endl;	
		}
		
		void getSALARYwisedata()
		{
			cout<<"enter salary: ";
			cin>>salary1;
			
			cout<<endl<<endl<<"-------------------------------"<<endl;
			cout<<"	MENU"<<endl;
			cout<<"-------------------------------"<<endl;
			cout<<"[1] "<<salary1<<" up"<<endl;
			cout<<"[2] "<<salary1<<" down"<<endl;
			cout<<"[3] "<<salary1<<" equal"<<endl<<endl;
			
			cout<<"enter your choice: ";
			cin>>choice1;
			cout<<endl;
			
			
			
		}
};

int main()
{
	d s[100];
	int n,i;
	int c;
	
	cout<<"enter how many employee: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i].setterB();
		s[i].setterC();
		cout<<endl;
	}
	
	do{
	
	cout<<endl<<endl<<"-------------------------------"<<endl;
	cout<<"	MENU"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"[1] Get All Data"<<endl;
	cout<<"[2] Get Age Wise Data"<<endl;
	cout<<"[3] Get Salary Wise Data"<<endl;
	cout<<"[4] Get All Employee Short Information"<<endl;
	cout<<"[0] exit"<<endl<<endl;
	
	cout<<"enter your choice: ";
	fflush(stdin);
	cin>>c;
	
	if(c==1)
	{
		for(i=0;i<n;i++)
		{
			s[i].getterALLdata();
		}		
	}
	else if(c==2)
	{
		s[0].getAGEwisedata();
			
			if(s[0].choice==1)
			{
				for(i=0;i<n;i++)
				{
					if(s[i].age>s[0].age1)
					{
						s[i].getterALLdata();
					}
				}
			}
			else if(s[0].choice==2)
			{
				for(i=0;i<n;i++)
				{
					if(s[i].age<s[0].age1)
					{
						s[i].getterALLdata();
					}
				}
			}
			else if(s[0].choice==3)
			{
				for(i=0;i<n;i++)
				{
					if(s[i].age==s[0].age1)
					{
						s[i].getterALLdata();
					}
				}
			}
			else
			{
				cout<<"enter valid value....";
			}
	}
	else if(c==3)
	{
			s[0].getSALARYwisedata();
			
			if(s[0].choice1==1)
			{
				for(i=0;i<n;i++)
				{
					if(s[i].salary>s[0].salary1)
					{
						s[i].getterALLdata();
					}
				}
			}
			else if(s[0].choice1==2)
			{
				for(i=0;i<n;i++)
				{
					if(s[i].salary<s[0].salary1)
					{
						s[i].getterALLdata();
					}
				}
			}
			else if(s[0].choice1==3)
			{
				for(i=0;i<n;i++)
				{
					if(s[i].salary==s[0].salary1)
					{
						s[i].getterALLdata();
					}
				}
			}
			else
			{
				cout<<"enter valid value.....";
			}
	}
	else if(c==4)
	{
		for(i=0;i<n;i++)
		{
			s[i].getterB();
		}		
	}
	else 
	{
		cout<<"enter valid value.....";
    }

    }while(c!=0);
	return 0;
}

