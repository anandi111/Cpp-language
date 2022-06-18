#include<iostream>
using namespace std;

class student
{
	private:
		int id;
		char name[100];
		int age;
		char course[100];
		char clg[100];
		char city[100];
		
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
			cout<<"enter course: ";	
			fflush(stdin); 
			gets(this->course);
			cout<<"enter collage: ";  
			fflush(stdin); 
			gets(this->clg);
			cout<<"enter city: ";  
			fflush(stdin); 	
			gets(this->city);
		}
		
		void getdata()
		{
			cout<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"age: "<<this->age<<endl;
			cout<<"course: "<<this->course<<endl;
			cout<<"collage: "<<this->clg<<endl;
			cout<<"city: "<<this->city<<endl;
		}
	
};

int main()
{
	student d[100];
	int i,n;
	
	cout<<"how many student: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		
		d[i].setdata();	
	} 
	
	for(i=0;i<n;i++)
	{
		
		d[i].getdata();	
	}
	
	return 0;
}
