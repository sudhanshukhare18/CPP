#include <iostream>
using namespace std;
int sumc(int n){
	
	while(n>0){
		
		return n+sumc(n-1);
	}
}
int main()
{
cout<<sumc(10);
return 0;
}
