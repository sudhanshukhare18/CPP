#include <iostream>
#include <math.h>
using namespace std;
int yash(int n){
	int sum=0;
	int r;
	while(n!=0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}
int main()
{
	for(int i=101;i<200;i++){
		cout<<yash(i)<<endl;
	} 
return 0;
}
