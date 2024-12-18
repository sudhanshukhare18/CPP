#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<100000;i++){
		n=i;
		while(n>0){
			int r%10;
			sum=sum+pow(r,cod);
			n=n/10;
		}
		if(sum==t){
			cout<<"armstrong";
		}
	}
return 0;
}
