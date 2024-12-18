#include <iostream>
using namespace std;
int main()
{
	int n1=17;
	int n2=85;
	
	
	int min=(n1<n2)?n1:n2;
	int hcf=1;
	int i=1;
	while(i<=min){
		if(n1%i==0 && n2%i==0){
			hcf=i;
			
		}
		i++;
	}
	cout<<"HCF is "<<hcf;
return 0;
}
