#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=(n/2)+1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		if(i==c||j==c||i==j||j==(n-i+1))
		cout<<"* ";
		else
		cout<<"  ";
		}
		cout<<endl;
	}

return 0;
}
