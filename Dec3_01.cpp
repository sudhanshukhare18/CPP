#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number";
	cin>>n
	cout<<"Choose 1 For Square , 2 For Cube, 3 For Squareroot"<<endl;
	int ch;
	cin>>ch;
	switch(ch){
		case 1{
			cout<<n*n;
			break;
		}
		case 2{
			cout<<n*n*n;
			break;
		}
		case 3{
			cout<<sqrt(n);
			break;
		}
	}
return 0;
}
