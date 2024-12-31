#include <iostream>
using namespace std;
int oddd(int n)
{
	if(n>1){
		if(n%2! =0){
		n=n-1;
	}
		cout<<n<<" ";
		return oddd(n-2);
	}
	else{
		return 1;
	}


}
int main()
{
cout<<oddd(100);
return 0;
}
