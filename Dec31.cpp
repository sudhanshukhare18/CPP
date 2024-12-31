#include <iostream>
using namespace std;
void fib(int n){
	int a=0;
	int b=1;
	int c=0;
	cout<<a<<"\t"<<b<<"\t";
	for(int i=3;i<=n;i++){
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}
	
}
int main()
{
	fib(6);
return 0;
}
