#include<iostream>
using namespace std;

class student
{
	private:
		int id;
		char name[100];
		int age;
		char course[100];
		static char clg[100];
		static char city[100];
		
	public:
		
		void setdata()
		{
			cout<<"enter id: ";  
			cin>>this->id;
			
			cout<<"enter name: "; 
		    cin>>this->name;
		    
			cout<<"enter age: ";
			cin>>this->age;
			
			cout<<"enter course: ";
			cin>>this->course;
			
		}
		
		void getdata()
		{
			cout<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"age: "<<this->age<<endl;
			cout<<"course: "<<this->course<<endl;
			cout<<"collage: "<<clg<<endl;
			cout<<"city: "<<city<<endl
		}
};

char student :: clg[100]="RNWIET";
char student :: city[100]="surat"; 

int main()
{
	student s[100];
	int i,n;
	
	cout<<"how many stuent: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i].setdata();
	}
	
	for(i=0;i<n;i++)
	{
		s[i].getdata();
	}
	
	return 0;
}
