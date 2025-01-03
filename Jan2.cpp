#include <iostream>
using namespace std;
int main()
{
	int x=56;
	int *p;
	p=&x;
	cout<<"value "<<x<<endl;
	cout<< "Add "<<&x<<endl;
	cout<<"Pointer Value "<<p<<endl;
	cout<<"Pointer Value derefrencing "<<*p<<endl;
}