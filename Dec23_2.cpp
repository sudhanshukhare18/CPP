#include <iostream>
using namespace std;
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
		if(arr[i]%2==0)
		sume+=arr[i];
		else
		sumo+=arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nSum Of EVEN Numbers : "<<sume;
	cout<<"\nSum Of ODD Numbers : "<<sumo ;
	return 0;
}
