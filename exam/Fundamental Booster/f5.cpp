//5. WAP to find square root of given numbers from array elements.

#include<iostream>
using namespace std;

int main()
{
	int a[100];
	int n,i,sum;
	
	cout<<"enter array size: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		sum = a[i]*a[i];
		cout<<sum<<endl;
	}
	
	return 0;
}
