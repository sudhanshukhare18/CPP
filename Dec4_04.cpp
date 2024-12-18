#include <iostream>
using namespace std;
int main()
{
	int i=1;
	int sum=0;
	while(i<=100){
		if(i%7==0){
		
		sum=sum+i;
		}
		
		
		i++;
	}
	cout<<sum;
return 0;
}
