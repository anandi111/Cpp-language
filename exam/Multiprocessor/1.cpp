//1. WAP to create a Message class with a constructor that takes a single 
//string with a default value. Create a private member string, and in the 
//constructor simply assign the argument string to your internal string.
// Create two overloaded member functions called print( ): one that takes 
// no arguments and simply prints the message stored in the object, and one 
// that takes a string argument, which it prints in addition to the internal message.

#include<iostream>
#include<string.h>
using namespace std;

class message
{
	protected:
		char name[100];
};

class M: public message
{
	public:
		
		M()
		{
			cout<<endl<<"	Enter your name: ";
			cin>>name;
		}
		
		M(char n[])
		{
			cout<<"	hello.... "<<n<<endl;
		}
};

int main()
{
	M obj;
	M obj1("Good Morning");
	return 0;
}
