#include <iostream>
using namespace std;
int main()
{
	int a;
cout<<"enter Seat Number"<<endl;
cin>>a;
	if (a>0 and a<72 ){
	if( a%8==1){
	cout<<"lower";
	}
   else if (a%8==2){
    	cout<<"middle";
	}
	else if(a%8==3){
		cout<<"upper";
	
	}else if(a%8==4){
		cout<<"lower";
	}
	else if(a%8==5){
		cout<<"middle";
	}
	else if(a%8==6){
		cout<<"upper";
	}
	else if(a%8==7){
		cout<<"side lower";
	}
	else if(a%8==0){
		cout<<" side upper";
		
	}
}
	else
	cout<<"Special Facility On The Roof Of Train";
	


return 0;
}
