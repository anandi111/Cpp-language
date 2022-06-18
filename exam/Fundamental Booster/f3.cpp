//3. WAP to convert given string into toggle case.

#include<iostream>
using namespace std;

int main()
{
	int i;
	char a[100];
	
	cout<<"enter any msg: ";
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&'z'>=a[i])
		{
			a[i]=a[i]-32;
		}
		else if(a[i]>='A'&&'Z'>=a[i])
		{
			a[i]=a[i]+32;
		}
	}
	
	puts(a);
	return 0;
}
