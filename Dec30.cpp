#include <iostream>
using namespace std;
int arrsum(int *p , int sz){
	int sum=0;
	int i=0;
	while(i<sz){
		sum+=*p;
		p+=1;
		i++;
	}
	return sum;
}
int main()
{
	int arr[]={1,2,3,4,5,6,8,7,9,10};
	int s=sizeof(arr)/sizeof(arr[0]);
	cout<<arrsum(arr,s);
	return 0;
}
