#include <iostream>
using namespace std;
int sqr(int n){
	
	if(n<=10){
		cout<<n*n<<" ";
		
		return sqr(n+1);
	}
	else{
		return 1;
	}
	
	
	
}
int main()
{
	sqr(6);
return 0;
}
