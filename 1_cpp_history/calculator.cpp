#include<iostream>
using namespace std;
void calculator()
{
	int a,b,c,n;
	do{
	cout<<"press1 for addition"<<endl;
	cout<<"press2 for substraction"<<endl;
	cout<<"press3 for multiplication"<<endl;
	cout<<"press4 for divition"<<endl;
	cout<<"press5 for modulas"<<endl;
	cout<<"press0 for exit"<<endl;
	
	cout<<"enter your choice: ";
	cin>>n;
	
	switch(n)
	{
		case 1 :cout<<"enter a: ";
				cin>>a;
				cout<<"enter b: ";
				cin>>b;
				c=a+b;
		        cout<<"- add - - - - - - "<<endl
				    <<"/		/"<<endl
					<<"/		/"<<endl
					<<"/    "<<a<<"+"<<b<<"="<<c<<"   /"<<endl
					<<"/		/"<<endl
					<<"/		/"<<endl
					<<"- - - - - - - - -"<<endl;
		          break;
		
		case 2 :cout<<"enter a: ";
				cin>>a;
				cout<<"enter b: ";
				cin>>b; 
				c=a-b;
		        cout<<"- sub - - - - - - "<<endl
				    <<"/		/"<<endl
					<<"/		/"<<endl
					<<"/    "<<a<<"-"<<b<<"="<<c<<"   /"<<endl
					<<"/		/"<<endl
					<<"/		/"<<endl
					<<"- - - - - - - - -"<<endl;
		          break;
		          
		case 3 :cout<<"enter a: ";
				cin>>a;
				cout<<"enter b: ";
				cin>>b; 
				c=a*b;
		        cout<<"- mul - - - - - - "<<endl
				    <<"/		/"<<endl
					<<"/		/"<<endl
					<<"/    "<<a<<"*"<<b<<"="<<c<<"   /"<<endl
					<<"/		/"<<endl
					<<"/		/"<<endl
					<<"- - - - - - - - -"<<endl;
		          break;
				  
		case 4 :cout<<"enter a: ";
				cin>>a;
				cout<<"enter b: ";
				cin>>b; 
				c=a/b;
		        cout<<"- add - - - - - - "<<endl
				    <<"/		/"<<endl
					<<"/		/"<<endl
					<<"/    "<<a<<"/"<<b<<"="<<c<<"   /"<<endl
					<<"/		/"<<endl
					<<"/		/"<<endl
					<<"- - - - - - - - -"<<endl;
		          break;
		
		case 5 :cout<<"enter a: ";
				cin>>a;
				cout<<"enter b: ";
				cin>>b;
				c=a%b;
		        cout<<"- add - - - - - - "<<endl
				    <<"/		/"<<endl
					<<"/		/"<<endl
					<<"/    "<<a<<"%"<<b<<"="<<c<<"   /"<<endl
					<<"/		/"<<endl
					<<"/		/"<<endl
					<<"- - - - - - - - -"<<endl;
		          break;
		
		case 0 :  break;
		
		default : cout<<"invalid coice...";        
	}
	}while(n!=0);
	
}
int main()
{
	
	calculator();
	return 0;
}
