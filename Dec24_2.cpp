#include <iostream>
using namespace std;
int main()
{
	int arr[]={23,5,53,1,2,3,5,321,5,432,54,312,53};
		int sz=sizeof(arr)/sizeof(arr[0]);
		int mx=arr[0];
		for(int i=1;i<sz;i++){
			if(arr[i]>mx){
				mx=arr[i];
			}
		}
		cout<<mx;
return 0;
}
