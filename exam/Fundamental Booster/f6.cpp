//6. WAP to generate cube of given 5 numbers and make an array of that generated cubes.


#include<iostream>
using namespace std;

int main()
{
	int a[100];
	int b[100];
	int n,i,sum=0;
	
	cout<<"enter array size: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		sum=a[i]*a[i]*a[i];
		b[i]=sum;
	}
	
	cout<<"--------------------"<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<"b["<<i<<"]: ";
		cout<<b[i]<<endl;
	}
	
	return 0;
}
