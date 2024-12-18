#include <iostream>
using namespace std;
int main()
{
	int	count=0;
	int z;
	float c=0;
	float avg;
	cin>>z;
	while(z!=0){
		int r=z%10;
		count=count+r;
		c++;
		float(count);
		avg=count/c;
		z=z/10;
		
	}
	cout<<"Count Is : "<<avg<<endl;
}
