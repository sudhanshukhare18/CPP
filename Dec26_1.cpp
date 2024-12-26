#include <iostream>
using namespace std;
int main()
{
	int ttl=0;
	int arr[5][3]={{34,33,32},{45,45,31},{45,45,25},{45,45,45},{45,46,46}};
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" \t";
				
		}
		cout<<endl;
}
cout<<"==================Transpose=================="<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<arr[j][i]<<" \t";
				
		}
		cout<<endl;
	}
}