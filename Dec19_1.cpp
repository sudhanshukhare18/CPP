#include <iostream>
using namespace std;
int fact(int n){
	int fac=1;
	for(int i=1;i<=n;i++){
	
	fac=fac*i;
	
}
	return fac;
};
int main()
{
	cout<<fact(5);
	
return 0;
}
