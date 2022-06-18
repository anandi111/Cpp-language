#include<iostream>
using namespace std;

class country
{
	private:
		static char s[29][50];
		
		
	public:
		
		static void getdata()
		{
			int i,j;
			for(i=0;i<29;i++)
			{
				for(j=0;s[i][j]!=NULL;j++)
				{
					cout<<s[i][j];
				}
				cout<<endl;
			}
		}
		
};
char country::s[29][50]={"Andhra Pradesh",
						  "Arunachal Pradesh",
						  "Assam",
						  "Bihar",
						  "Chhattisgarh",
						  "Goa",
						  "Gujarat",
						  "Haryana",
						  "Himachal Pradesh",
						  "Jammu and Kashmir",
						  "Jharkhand",
						  "Karnataka",
						  "Kerala",
						  "Madhya Pradesh",
						  "Maharashtra",
						  "Manipur",
						  "Meghalaya",
						  "Mizoram",
						  "Nagaland",
						  "Odisha",
						  "Punjab",
						  "Rajasthan",
						  "Sikkim",
						  "Tamil Nadu",
						  "Telangana",
						  "Tripura",
						  "Uttar Pradesh",
						  "Uttarakhand",
						  "West Bengal"
						 };

int main()
{
	country::getdata();
	
	return 0;
}
