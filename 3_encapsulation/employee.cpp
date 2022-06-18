#include<iostream>
using namespace std;

class employee
{
	private:
		int id;
		char name[100];
		int age;
		int exe;
		int salary;
		char role[100];
		char city[100];
		char com_name[100];
	
	public:
		
		void setdata()
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
		
		void getdata()
		{
			cout<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"exeperiance: "<<this->exe<<endl;
			cout<<"salary: "<<this->salary<<endl;
			cout<<"role: "<<this->role<<endl;
			cout<<"city: "<<this->city<<endl;
			cout<<"company name: "<<this->com_name<<endl;
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
