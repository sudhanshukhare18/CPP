#include <iostream>
using namespace std;
int sum(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	int f=0;
	for(int i=1;i<=n;i++){
		f=f+i;
	}
	return f;
}
int main()
{
	cout<<sum();
return 0;
}
