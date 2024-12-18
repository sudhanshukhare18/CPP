#include <iostream>
using namespace std;
void si(int p,float r,int t){
	cout<<"Principal is : "<<p<<endl;
	cout<<"Rate is : "<<r<<endl;
	cout<<"Time(Years) : "<<t<<endl;
	cout<<"Simple Intrest : "<<(p*r*t)/100;
}
int main()
{
	si(7000,14.1,2);
return 0;
}
