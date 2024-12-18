#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter Char \n";
	cin>>ch;
	ch = str1[1];
	if(ch>=65 && ch<=90){
		cout<<"capital";
	}
	else if(ch>=90 && ch<=122){
		cout<<"Small";
	}
	else if(ch>=47 && ch<=57){
	
		cout<<"Number";
	}
	else{
		cout<<"Special Character";
	}
	
return 0;
}
