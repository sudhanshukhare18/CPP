#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	int c=0;
	cin>>a;
	int n=a;
	int sum=0;
	while(n!=0){
		int r=n%10;
		c++;
		n=n/10;
	}
	n=a;
	while(n>0){
		int r=n%10;
		sum+=pow(r,c);
		n=n/10;
	}
	if(sum==a){
		cout<<"Armstrong Number";
	}
	else
	cout<<"Not Armstrong Number";

return 0;
}
