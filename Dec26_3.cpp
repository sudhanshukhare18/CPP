#include <iostream>
using namespace std;
int main()
{
	int arr[3][3]={9,8,7,6,5,4,3,2,1};
	int arr2[3][3]={9,8,7,6,5,4,3,2,1};
	int arr3[3][3];
	cout<<"===================1=============="<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	cout<<"===================2=============="<<endl;
	for(int i;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr2[i][j];
		}
		cout<<endl;
	}
	cout<<"===================Substraction=============="<<endl;
		for(int i;i<3;i++){
		for(int j=0;j<3;j++){
			arr3[i][j]=arr2[i][j]-arr[i][j];
			cout<<arr3[i][j];
		}
		cout<<endl;
	}
	
}
//wap to perform 2a*4b*c
//wap to perform 2a+b+c