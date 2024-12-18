#include <iostream>
using namespace std;
int main()
{
	int n=37;
	int c=0;
	int i=2;
	while(i<n/2){
		if(n%i==0){
			c++;
		}
		i++;
	}
	if(c==0){
		cout<<n<<" prime number "<<endl;
	}
return 0;
}
