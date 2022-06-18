#include<iostream>
using namespace std;

class a
{
	public:
		int x=5;
		int	y=10;
};

class b: public a
{
	public:
		int z=15;	
};

class c: public b
{
	private:
		int z1=20;
		
	public:
		 void getdata()
		 {
		 	cout<<x<<endl;
		 	cout<<y<<endl;
		 	cout<<z<<endl;
		 	cout<<z1<<endl;
		 }	
};

int main()
{
	c obj;
	
	obj.getdata();
	
	return 0;
}
