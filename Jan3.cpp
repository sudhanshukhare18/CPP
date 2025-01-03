#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	float fee;
	bool gen;
	
	void get(string s, int a, double f, bool g)
	{
		name = s;
		age = a;
		fee = f;
		gen = g;
	}
	
	void show()
	{
			cout<<"Name is: "<<name
	<<" Age is: "<<age
	<<" Fee is: "<<fee
	<<" Gender is: "<<gen<<endl;
	}
	
};

int main()
{
	student s[100];

	
s[0].get("Goldy", 19, 18000, false);
s[1].get("Yash", 21, 12000, true);
s[2].get("Tanya", 22, 6000, false);
s[3].get("Hitesh", 33, 1000, true);	
s[0].show();
s[1].show();
s[2].show();
s[3].show();
	

	
	
 	return 0;
}