#include <iostream>
using namespace std;
int main()
{
	int	count=0;
	int z;
	cin>>z;
	while(z!=0){
		int r=z%10;
		count=count+r;
		z=z/10;
		
	}
	cout<<"Count Is : "<<count<<endl;
}
