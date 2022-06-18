#include<iostream>
using namespace std;

class House
{
	public:
	int area;
	int houseno;
	int balcony;
	int floor;
	int sofa;	
};

class Room
{
	public:
	int fan;
	int table;
	char colour[100];
	int chair;
	int light;
};

int main()
{
	House d;
	Room a;
	
	cout<<"enter house details: "<<endl;
	cout<<"enter area: ";
	cin>>d.area;
	cout<<"enter house no: ";
	cin>>d.houseno;
	cout<<"enter balcony: ";
	cin>>d.balcony;
	cout<<"enter floor: ";
	cin>>d.floor;
	cout<<"enter sofa: ";
	cin>>d.sofa;
	
	cout<<"enter room details: "<<endl;
	cout<<"enter fan: ";
	cin>>a.fan;
	cout<<"enter table: ";
	cin>>a.table;
	cout<<"enter colour: ";
	cin>>a.colour;
	cout<<"enter chair: ";
	cin>>a.chair;
	cout<<"enter light: ";
	cin>>a.light;
	cout<<endl<<endl;
	
	cout<<"all details => "<<endl;
	cout<<"House =>"<<endl;
	cout<<"area: "<<d.area<<endl;
	cout<<"house no: "<<d.houseno<<endl;
	cout<<"balcony: "<<d.balcony<<endl;
	cout<<"floor: "<<d.floor<<endl;
	cout<<"sofa: "<<d.sofa<<endl;
	cout<<endl<<"Room =>"<<endl;
	cout<<"fan: "<<a.fan<<endl;
	cout<<"table: "<<a.table<<endl;
	cout<<"colour: "<<a.colour<<endl;
	cout<<"chair: "<<a.chair<<endl;
	cout<<"light: "<<a.light<<endl;
	
	return 0;
}
