#include <iostream>
using namespace std;
int main()
{
	char gen;
	cout<<"Enter Your Gender";
	cin>>gen;
	int age;
	cout<<"Enter Your Age";
	cin>>age;
	if((gen=='m'||gen=='M') and age>60)
	cout<<"Pension Amount : 5000";
	
	else if((gen=='m'||gen=='M') and age>70)
	cout<<"Pension Amount : 3000";
	else if((gen=='f'||gen=='F') and age<=55)
		cout<<"No Pension Khud Kamao";
	else if((gen=='f'||gen=='F') and age>65)
	cout<<"Pension Amount : 500";
	else if((gen=='f'||gen=='F') and age>55)
	cout<<"Pension Amount : 1000";
	else
	cout<<"Pension Amount : 0";
return 0;
}
