#include <iostream>
using namespace std;
void sqr(int);
void cub(int);
int main()
{
	for(int i=1;i<=100;i++){
		sqr(i);
	
	}
	
return 0;
}
void sqr(int a){
	cout<<"Square of "<<a<<" is "<<a*a<<endl;
}
void cub(int a){
	cout<<a*a*a<<endl;
}