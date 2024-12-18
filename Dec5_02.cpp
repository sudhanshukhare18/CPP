#include <iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	a=n;
	int sum = 0;
	while(n!=0){
		int r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	
	if(sum==a){
		cout<<"It's Palindrome Number";
	}
	else{
		cout<<"It's Not Palindrome Number";
	}
return 0;
}
