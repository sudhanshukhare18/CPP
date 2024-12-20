#include <iostream>
using namespace std;
int fact(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	int f=1;
	for(int i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
int main()
{
	cout<<fact();
return 0;
}
