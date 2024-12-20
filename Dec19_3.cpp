#include <iostream>
using namespace std;
void lcm(int a,int b){
	int max=a;
	int lc=1;
	if(a>b){
		max=b;
	}
	for(int i=0;i<max;i++){
		if (a%i==0 || b%i==0){
			lc=lc*i;
		}
	}
	cout<<lc;
}
int main()
{
	lcm(12,14);
return 0;
}
