#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Student
{
	public:
		int stu_id;
		char stu_name[100];
		int stu_age;
		char stu_cource[100];
		char stu_clg[100];
		char stu_city[100]; 
};

int main()
{
	char n[100];
	Student s1,s2,s3,s4,s5;

	cout<<"Enter Your id: ";
	cin>>s1.stu_id;
	cout<<"Enter Your Full Name: ";
//	cin>>s1.stu_name;
	fflush(stdin);
	gets(s1.stu_name);
	cout<<"Enter Your age: ";
	cin>>s1.stu_age;
	cout<<"Enter Your cource: ";
	fflush(stdin);
	gets(s1.stu_cource);
	cout<<"Enter Your clg: ";
	fflush(stdin);
	gets(s1.stu_clg);
	cout<<"Enter Your city: ";
	cin>>s1.stu_city;
	
	cout<<endl<<endl;
	cout<<"---Information: "<<s1.stu_name<<"----"<<endl;
	cout<<"Student ID: "<<s1.stu_id<<endl;
	cout<<"Student Name: "<<s1.stu_name<<endl;
	cout<<"Student Age: "<<s1.stu_age<<endl;
	cout<<"Student Cource: "<<s1.stu_cource<<endl;
	cout<<"Student Collage: "<<s1.stu_clg<<endl;
	cout<<"Student City: "<<s1.stu_city<<endl;
	cout<<"-----------------------------"<<endl;
	
	cout<<endl<<endl;
	cout<<"Enter Your id: ";
	cin>>s2.stu_id;
	cout<<"Enter Your Full Name: ";
//	cin>>s1.stu_name;
	fflush(stdin);
	gets(s2.stu_name);
	cout<<"Enter Your age: ";
	cin>>s2.stu_age;
	cout<<"Enter Your cource: ";
	fflush(stdin);
	gets(s2.stu_cource);
	cout<<"Enter Your clg: ";
	fflush(stdin);
	gets(s2.stu_clg);
	cout<<"Enter Your city: ";
	cin>>s2.stu_city;
	
	cout<<endl<<endl;
	cout<<"---Information: "<<s2.stu_name<<"----"<<endl;
	cout<<"Student ID: "<<s2.stu_id<<endl;
	cout<<"Student Name: "<<s2.stu_name<<endl;
	cout<<"Student Age: "<<s2.stu_age<<endl;
	cout<<"Student Cource: "<<s2.stu_cource<<endl;
	cout<<"Student Collage: "<<s2.stu_clg<<endl;
	cout<<"Student City: "<<s2.stu_city<<endl;
	cout<<"-----------------------------"<<endl;
	
	cout<<endl<<endl;
	cout<<"Enter Your id: ";
	cin>>s3.stu_id;
	cout<<"Enter Your Full Name: ";
//	cin>>s1.stu_name;
	fflush(stdin);
	gets(s3.stu_name);
	cout<<"Enter Your age: ";
	cin>>s3.stu_age;
	cout<<"Enter Your cource: ";
	fflush(stdin);
	gets(s3.stu_cource);
	cout<<"Enter Your clg: ";
	fflush(stdin);
	gets(s3.stu_clg);
	cout<<"Enter Your city: ";
	cin>>s3.stu_city;
	
	cout<<endl<<endl;
	cout<<"---Information: "<<s3.stu_name<<"----"<<endl;
	cout<<"Student ID: "<<s3.stu_id<<endl;
	cout<<"Student Name: "<<s3.stu_name<<endl;
	cout<<"Student Age: "<<s3.stu_age<<endl;
	cout<<"Student Cource: "<<s3.stu_cource<<endl;
	cout<<"Student Collage: "<<s3.stu_clg<<endl;
	cout<<"Student City: "<<s3.stu_city<<endl;
	cout<<"-----------------------------"<<endl;
	
	cout<<endl<<endl;
	cout<<"Enter Your id: ";
	cin>>s4.stu_id;
	cout<<"Enter Your Full Name: ";
//	cin>>s1.stu_name;
	fflush(stdin);
	gets(s4.stu_name);
	cout<<"Enter Your age: ";
	cin>>s4.stu_age;
	cout<<"Enter Your cource: ";
	fflush(stdin);
	gets(s4.stu_cource);
	cout<<"Enter Your clg: ";
	fflush(stdin);
	gets(s4.stu_clg);
	cout<<"Enter Your city: ";
	cin>>s4.stu_city;
	
	cout<<endl<<endl;
	cout<<"---Information: "<<s4.stu_name<<"----"<<endl;
	cout<<"Student ID: "<<s4.stu_id<<endl;
	cout<<"Student Name: "<<s4.stu_name<<endl;
	cout<<"Student Age: "<<s4.stu_age<<endl;
	cout<<"Student Cource: "<<s4.stu_cource<<endl;
	cout<<"Student Collage: "<<s4.stu_clg<<endl;
	cout<<"Student City: "<<s4.stu_city<<endl;
	cout<<"-----------------------------"<<endl;
	
	cout<<endl<<endl;
	cout<<"Enter Your id: ";
	cin>>s5.stu_id;
	cout<<"Enter Your Full Name: ";
//	cin>>s1.stu_name;
	fflush(stdin);
	gets(s5.stu_name);
	cout<<"Enter Your age: ";
	cin>>s5.stu_age;
	cout<<"Enter Your cource: ";
	fflush(stdin);
	gets(s5.stu_cource);
	cout<<"Enter Your clg: ";
	fflush(stdin);
	gets(s5.stu_clg);
	cout<<"Enter Your city: ";
	cin>>s5.stu_city;
	
	cout<<endl<<endl;
	cout<<"---Information: "<<s5.stu_name<<"----"<<endl;
	cout<<"Student ID: "<<s5.stu_id<<endl;
	cout<<"Student Name: "<<s5.stu_name<<endl;
	cout<<"Student Age: "<<s5.stu_age<<endl;
	cout<<"Student Cource: "<<s5.stu_cource<<endl;
	cout<<"Student Collage: "<<s5.stu_clg<<endl;
	cout<<"Student City: "<<s5.stu_city<<endl;
	cout<<"-----------------------------"<<endl;
		
	return 0;
}
