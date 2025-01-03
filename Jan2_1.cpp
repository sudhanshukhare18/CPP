#include <iostream>
using namespace std;
int main()
{
	int x=12000;
	int y=23000;
	int *p,*q;
	p=&y;
	q=&x;
	cout<<"before swap"<<endl;
	cout<<"X : "<<x<<endl;
	cout<<"Y : "<<y<<endl;
	
	int t;
	t=*p;
	*p=*q;
	*q=t;
	cout<<"After Swap"<<endl;
	cout<<x<<endl;
	cout<<y<<endl;	
return 0;
}
