#include<iostream>
using namespace std;

class hotel
{
	private:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
	
	public:
		
		hotel()
		{
			cout<<"enter id: ";
			cin>>this->id;
			cout<<"enter name: ";
			cin>>this->name;
			cout<<"enter type: ";
			cin>>this->type;
		}
		hotel(int s_s, int r_s, int e_y)
		{
			this->staff_size=s_s;
		    this->room_size=r_s;
		    this->establish_year=e_y                                                                                                                                       ;
		}
		
		void getdata1()
		{
			cout<<"id: "<<this->id<<endl;
			cout<<"name: "<<this->name<<endl;
			cout<<"type: "<<this->type<<endl;
			
		}
		
		void getdata2()
		{
			cout<<"staff size: "<<this->staff_size<<endl;
			cout<<"room size: "<<this->room_size<<endl;
			cout<<"establish year: "<<this->establish_year<<endl;
			
		}
};

int main()
{
	hotel d,d1(100, 50, 2011);
	d.getdata1();
	d1.getdata2();
	
	return 0;
}
