//4. WAP to check if a given character is vowel or consonant

#include<iostream>
using namespace std;

int main()
{
	char a;
	
	cout<<"enter any msg: ";
	cin>>a;
	
	if(a=='a'||a=='e'||a=='u'||a=='o'||a=='u'
	||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout<<"character is Vowel.";
	}
	else
	{
		cout<<"character is Constant.";
	}
	
	return 0;
}
