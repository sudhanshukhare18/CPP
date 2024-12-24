#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	cout<<"Enter The Size Of Array : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter Element value : "<<i<<" : ";
		cin>>arr[i];
		sum+=arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nSum is : "<<sum;
	return 0;
}
