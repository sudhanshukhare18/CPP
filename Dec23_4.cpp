#include <iostream>
using namespace std;
bool prime(int n){
	int c=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==0){
		return true;
	}
	else{
		return false;
	}
}
int main()
{
	int n;
	int sume=0;
	int sumo=0;
	cout<<"Enter The Size Of Array : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter Element value : "<<i<<" : ";
		cin>>arr[i];
		
	
		
		if(prime(arr[i])){
		
		}
		else{
			arr[i]=0;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
//wap to print all the element of array in reverse order
//wap to print all the element which is divisible by 2 3 4 5 is as it is rest all become 0
//wap to print all the sum of postive and negative number 