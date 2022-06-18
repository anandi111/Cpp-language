//2. WAP which illustrate the use of Method Overriding concept.

#include<iostream>
#include<string.h>
using namespace std;

class hotel
{
	protected:
		int tea;
		int coffee;
		int coco;
		
		void setdata()
		{
			cout<<endl<<"	Enter Your Order: "<<endl;
			cout<<"	Tea: ";
			cin>>tea;
			cout<<"	Coffee: ";
			cin>>coffee;
			cout<<"	Coco: ";
			cin>>coco;
		}
		
		void order()
		{
			cout<<"	Tea : "<<tea<<endl;
			cout<<"	Coffee : "<<coffee<<endl;
			cout<<"	Coco : "<<coco<<endl;
		}
};

class customer: public hotel
{
	public:
		
		void order()
		{
			setdata();
			cout<<endl<<"	Sorry! Your Order isn't Filfill..Because Limited stock."<<endl;
			cout<<"	Tea : 0"<<endl;
			cout<<"	Coffee : 1"<<endl;
			cout<<"	Coco : 3"<<endl;
		}
};

int main()
{
	customer c1;
	
	c1.order();
	
	return 0;
}
