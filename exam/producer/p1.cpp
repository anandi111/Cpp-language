#include<iostream>
using namespace std;

class cafe
{
	private:
		int tea;
		int coffee;
		int coco;
		
	public:
	
	cafe()
	{
		cout<<"How much you want tea: ";
		cin>>this->tea;
		cout<<"How much you want coffee: ";
		cin>>this->coffee;
		cout<<"How much you want coco: ";
		cin>>this->coco;
		cout<<endl<<endl	;
	}
	
	void getdata()
	{
		cout<<"---YOUR ORDER---"<<endl;
		cout<<"|   tea="<<this->tea<<"     |"<<endl;
		cout<<"|   coffee="<<this->coffee<<"  |"<<endl;
		cout<<"|   coco="<<this->coco<<"    |"<<endl;
		cout<<"----------------"<<endl;
	}	
};

int main()
{
	cafe d;
	d.getdata();
	return 0;
}
