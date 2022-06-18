#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class comp
{
	private:
		int stu_no;
		char comp_name[100];
		
	public:
	
	comp(int stu_no, char comp_name[])
	{
		this->stu_no=stu_no;
		strcpy(this->comp_name,comp_name);	
	}
	
	void getdata()
	{
		cout<<"total participaters: "<<this->stu_no<<endl;
		cout<<"competition name: "<<this->comp_name<<endl;
	}	
};

int main()
{
	comp d(28, "mehandi"),d1(50, "drowing");
	d.getdata();
	d1.getdata();
	return 0;
}
