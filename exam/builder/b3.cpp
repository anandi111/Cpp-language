#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Hotel
{
	private:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int es_year;
		char add[100];
		char rating[100];
		
	public:
		
		void setdata()
		{
			cout<<"enter id: ";	
			cin>>this->id;
			cout<<"enter name: ";
			fflush(stdin);
			gets(this->name);
			cout<<"enter type: ";
			fflush(stdin);
			gets(this->type);
			cout<<"enter staff size: ";	
			cin>>this->staff_size;
			cout<<"enter room size: ";	
			cin>>this->room_size;
			cout<<"enter establish year: ";	
			cin>>this->es_year;
			cout<<"enter address: ";
			fflush(stdin);
			gets(this->add);
			cout<<"enter rating type: ";
			fflush(stdin);
			gets(this->rating);
		}
		
		void getdata()
		{
			cout<<endl<<endl<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"type: "<<this->type<<endl;
			cout<<"staff size: "<<this->staff_size<<endl;
			cout<<"room size: "<<this->room_size<<endl;
			cout<<"establish year: "<<this->es_year<<endl;
			cout<<"address: "<<this->add<<endl;
			cout<<"rating type: "<<this-> rating<<endl;
		}
};

int main()
{
	Hotel d[100];
	int n,i;
	
	cout<<"enter howmany hotel: ";
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
