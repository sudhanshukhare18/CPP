#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	for(int i=0;i<10;i++){
		if(i%3==0 || i%7==0){
			sum+=i;
		}
	}
	cout<<sum;
return 0;
}
