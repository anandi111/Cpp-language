//1. WAP to check given string is numeric or not.

#include<iostream>
using namespace std;

int main()
{
	char a[100];
	int i,f=0;
	
	cout<<"Enter any Msg: ";
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>='1'&&'9'>=a[i])
		{
			f=1;
			break;
		}
	}
	
	if(f==1)
	{
		cout<<"given string is numeric.";
	}
	else 
	{
		cout<<"given string isn't numeric.";
	}
	
	return 0;
}
