#include <iostream>
using namespace std;
int hiresh(int s,int f){
	int sum=0;
	for(int i=s;i<=f;i++){
		if(i%5==0){
			sum=sum+i;
		}
	}
	return sum;
}
int main()
{
	cout<<hiresh(100,200);
return 0;
}
