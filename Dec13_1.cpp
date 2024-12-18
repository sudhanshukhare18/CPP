#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int mid=(n+1)/2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==mid||i==mid||(i==1 && j>mid )||(i==n &&j<mid)||(j==1 && i<mid)||(j==n && i>mid)){
				cout<<"+ ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}

return 0;
}
