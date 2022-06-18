#include<iostream>
using namespace std;

class Hotel
{
	private:
	int pizza;
	int burger;
	int vadapav;	
};

class Cafe
{
	public:
	int tea;
	int coffee;
	int coco;
};

int main()
{
	Cafe d;
	
	cout<<"enter quantity of tea , coffee and coco: ";
	cin>>d.tea>>d.coffee>>d.coco;
	
	cout<<endl<<endl;
	
	cout<<"----order-------"<<endl
		<<"/     tea:"<<d.tea<<"    /"<<endl
		<<"/   coffee:"<<d.coffee<<"   /"<<endl
		<<"/     coco:"<<d.coco<<"   /"<<endl
		<<"---------------";
		
	return 0;
}
