#include <iostream>
using namespace std;
int main()
{	
	int sal;
	cin>>sal;
	if(sal<=6000){
	cout<<"no tax";	
	}
	else if(sal<8000){
		cout<<sal-(sal*0.1);
	}
	else{
		cout<<sal-(sal*0.3);
	}

return 0;
}
