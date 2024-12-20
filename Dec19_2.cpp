#include <iostream>
using namespace std;
void s(char x){
	int n,c;
	cout<<"Enter First Value : ";
	cin>>n;
	cout<<"Enter Second Value : ";
	cin>>c;
	switch (x){
		case '+':
			cout<<n+c<<endl;
			break;
		case '-':
			cout<<n-c<<endl;
			break;
		case '*':
			cout<<n*c<<endl;
			break;
		case '/':
		cout<<n/c<<endl;
		break;
		case 'N':
		break;	
	}
	
	
}
int main()
{
	
		
	while(true){
		char a;
		cout<<"Enter + for add ";
		cout<<"Enter - for Subtract ";
		cout<<"Enter * for multiply ";
		cout<<"Enter / for Divide ";
		cout<<"Enter N To Terminate "<<endl;
		cin>>a;
		if(a=='N'){
			break;
		}
		else{
			s(a);
		}
	}
	

return 0;
}
