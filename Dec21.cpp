#include <iostream>
using namespace std;

	void add(int x, int y){
		cout<<x+y<<endl;
	}
		void sub(int x, int y){
		cout<<x-y<<endl;
	}
		void mul(int x, int y){
		cout<<x*y<<endl;
	}
		void divide(int x, int y){
		cout<<x+y<<endl;
	}
	

int main()
{
	
	int i=1;

	while(i != 0)
	{
	int a;
	cout<<"enter number 1 "<<endl;
	cin>>a;
	int b;
	cout<<"enter number 2"<<endl;
	cin>>b;
	cout<<"press 1 for add"<<"\n pess 2 for sub"<<"\n press 3 for mul\n"<<"press 4 for divide" <<endl;
	cin>>i;
	
	if(i==1){
		add(a,b);
	} 
	else if(i==2){
		sub(a,b);
	} 
	else if(i==3){
		mul(a,b);
	} 
	else if(i==4){
		divide(a,b);
	} 
	else{	
	cout<<"Kuch Dhang Ka Likho"<<i;
     }
	}

}