#include <iostream>
using namespace std;

struct student
{
	string name;
	string name1;
	char f;
	int price;

	
	void get(string s, string a, char f, int g)
	{
		name = s;
		name1 = a;
		this->f = f;
		price = g;
	}
	
	void show()
	{
	cout<<" Brand : "<<name<<"\n"
	<<" Model is: "<<name1<<"\n"
	<<" Price is: "<<price<<"\n"
	<<" Fuel Type: "<<f<<endl;
	cout<<"===================="<<endl;
	}
	
};

int main()
{
	student s[100];

	
s[0].get(" Mercedes ", " Falcon Maybach S650   ",'D',90000000);
s[1].get(" Rolls Royce ", " DISCOVER BESPOKE ", 'H',12000000);
s[2].get(" BMW ", " GOLDMAN X7 ", 'H',60000000);
s[3].get("Bentley", " SPUR ",'H', 1000000);	
s[0].show();
s[1].show();
s[2].show();
s[3].show();
	

	
	
 	return 0;
}
//WAP TO MAKE A STRUCTURE OF STUDENT WHERE DATATYPE ARE ENTITIES ARE 
//NAME,ENROLL,YEAR,SEM,SUB COMPUTE RESULT 
//HAPPY BIRTHDAY TO YOU 