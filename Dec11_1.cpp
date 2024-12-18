#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	for(int n=2;n<100;n++){
	
	//int n=37;
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
		
		sum+=n;
	}
}
cout<<sum<<" Sum "<<endl;
return 0;
}

