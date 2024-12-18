#include <iostream>
using namespace std;
int main()
{
	int n1=6;
	int n2=8;
	int n3=18;
	
	int temp=(n1<n2)?n1:n2;
	int min=(temp<n3)?temp:n3;
	int hcf=1;
	int i=1;
	while(i<=min){
		if(n1%i==0 && n2%i==0 && n3%i==0){
			hcf=i;
			
		}
		i++;
	}
	cout<<"HCF is "<<hcf;
return 0;
}
