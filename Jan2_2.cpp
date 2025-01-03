#include <iostream>
using namespace std;
string prime( int *x){
	int c=0;
	for(int i=2;i<*x;i++){
		if(*x%i==0){
			c++;
		}
		
	}
	if (c==0)
	return ("Prime");
	
	
}
int main()
{
	int a=7;
	int *x= &a;
	cout<<prime(x);
return 0;
}
