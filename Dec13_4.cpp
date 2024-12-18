#include <iostream>
using namespace std;
int main()
{
	int n=9;
	int mid=(n+1)/2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=mid;j++){
			if(j==1||j==(j==mid and i>mid)||i==n||i==1||i==mid||j==mid){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
			
		}
		cout<<endl;
		
	}
return 0;
}
