#include <iostream>
using namespace std;
void fibo(int n)
{
	int a=0;
	int b=1;
	int c;
	cout<<a<<" "<<b;
	for(int i=2;i<n;i++){
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
};
int main()
{
	fibo(10);

return 0;
}
