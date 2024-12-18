#include <iostream>
using namespace std;
int main()
{
	int n1=17;
	int n2=5;
	int n3=3;
	int temp=(n1<n2)?n1:n2;
	int lcm=(temp<n3)?temp:n3;
	while(1){
		if(lcm%n1==0 && lcm%n2==0 && lcm%n3==0 ){
			break;
		}
		else{
			lcm++;
		}
	}
	cout<<"LCM is "<<lcm;
return 0;
}
