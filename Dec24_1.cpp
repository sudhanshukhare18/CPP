#include <iostream>
using namespace std;
int main()
{
		int arr[]={23,5,53,1,2,3,5,321,5,4321,54,312,53};
		int sz=sizeof(arr)/sizeof(arr[0]);
		int key,pos;
		cin>>key;
		for(int i =0;i<sz;i++){
			if(arr[i]==key){
				cout<<"Element Found ";
				pos = i;
			}
		
	}
		cout<<pos;

return 0;
}