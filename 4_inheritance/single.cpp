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
	private:
		int z=15;
		
	public:
		
		void getdata()
		{
			cout<<x<<endl;
			cout<<y<<endl;
			cout<<z<<endl;
		}
};

int main()
{
	b obj;
	
	obj.getdata();
	
	return 0;
}
