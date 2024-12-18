//write a programme to demonstrate switch in c++ in that if we enter 1 it will print today sunday if we print 5 it print thursday if we print 7 it print thursday grearter than 7 holiday
#include <iostream>
using namespace std;
int main()
{	
	int n;
	cout<<"Enter Week Day Number : ";
	cin>>n;
	switch(n){
		case 1:{
			cout<<"It's Sunday";
			break;
		}
		case 2:{
			cout<<"It's Monday";
			break;
		}
		case 3:{
			cout<<"It's Tuesday";
			break;
		}
		case 4:{
			cout<<"It's Wednesday";
			break;
		}
		case 5:{
			cout<<"It's Thursday";
			break;
		}
		case 6:{
			cout<<"It's Friday";
			break;
		}
		case 7:{
			cout<<"It's Saturday";
			break;
		}
		default:{
			cout<<"Holiday";
			break;
		}
	}

return 0;
}
