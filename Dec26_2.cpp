#include <iostream>
using namespace std;
int main()
{
	int ttl=0;
	int arr[5][3]={{34,33,32},{45,45,31},{45,45,25},{45,45,45},{45,46,46}};
	int arr2[5][3]={{34,33,32},{45,45,31},{45,45,25},{45,45,45},{45,46,46}};
	int arr3[5][3];
cout<<"================1==========================="<<endl;	
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" \t";
				
		}
		cout<<endl;
}
cout<<"=================2=========================="<<endl;

	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" \t";
				
		}
		cout<<endl;
	}

cout<<"==================Addition=================="<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			arr3[i][j]=arr[i][j]+arr2[i][j];
			cout<<arr3[i][j]<<" \t";
				
		}
		cout<<endl;
	}
}


