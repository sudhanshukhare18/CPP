#include <iostream>
using namespace std;
int main()
{
	int n=28;
	int t=n;
	int sum=0;
	int i=1;
		while(i<n){
		if(n%i==0){
			sum+=i;
		}
		i++;	
		}
		
		if(sum==n){
			cout<<sum<<endl;
		}
		
	
return 0;
}
