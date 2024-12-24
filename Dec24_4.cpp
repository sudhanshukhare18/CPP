#include <iostream>
using namespace std;
int main()
{
	int arr[]={23,5,53,2,3,5,321,5,432,54,312,53};
		int sz=sizeof(arr)/sizeof(arr[0]);
		int mn=arr[0];
		int mn2=0;
		for(int i=1;i<sz;i++){
			if(arr[i]<mn){
				mn2=mn;
				mn=arr[i];
				
			}
		}
		cout<<"First Minimum"<<mn<<endl;
		cout<<"Second Minimum"<<mn2;
return 0;
}
