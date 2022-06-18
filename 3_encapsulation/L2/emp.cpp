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
		static char city[100];
		static char com_name[100];
	
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
		
		}
		
		void getdata()
		{
			cout<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"age: "<<this->age<<endl;
			cout<<"exeperiance: "<<this->exe<<endl;
			cout<<"salary: "<<this->salary<<endl;
			cout<<"role: "<<this->role<<endl;
			cout<<"city: "<<city<<endl;
			cout<<"company name: "<<com_name<<endl;
		}
		
};

char employee :: city[100]="surat";
char employee :: com_name[100]="RNW";

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
