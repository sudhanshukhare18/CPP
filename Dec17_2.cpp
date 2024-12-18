#include <iostream>
using namespace std;
void sod(int a){
	int n=a;
	int sum=0;
	while(n!=0){
		int r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum==a){
		cout<<"SOD";
	}
	else{
		cout<<"Not SOD";
	}
}
int main()
{
	
		sod(125);
		
		

return 0;
}
