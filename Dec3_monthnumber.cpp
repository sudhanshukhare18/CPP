//month by number and also number of days
#include <iostream>
using namespace std;
int main()
{
	int m;
	cout<<"Enter Month Number : ";
	cin>>m;
	switch(m){
		case 1:{
			cout<<"It's January";
			cout<<"\nDays In Month : "<<"31";
			break;
		}
		case 2:{
			cout<<"It's February";
			cout<<"\nDays In Month : "<<"28";
			break;
		}
		case 3:{
			cout<<"It's March";
			cout<<"\nDays In Month : "<<"31";
			break;
		}
		case 4:{
			cout<<"It's April";
			cout<<"\nDays In Month : "<<"30";
			break;
		}
		case 5:{
			cout<<"It's May";
			cout<<"\nDays In Month : "<<"31";
			break;
		}
		case 6:{
			cout<<"It's June";
			cout<<"\nDays In Month : "<<"30";
			break;
		}
		case 7:{
			cout<<"It's July";
			cout<<"\nDays In Month : "<<"31";
			break;
		}
		case 8:{
			cout<<"It's August";
			cout<<"\nDays In Month : "<<"31";
			break;
		}
		case 9:{
			cout<<"It's September";
			cout<<"\nDays In Month : "<<"30";
			break;
		}
		case 10:{
			cout<<"It's October";
			cout<<"\nDays In Month : "<<"31";
			break;
		}
		case 11:{
			cout<<"It's November";
			cout<<"\nDays In Month : "<<"30";
			break;
		}
		case 12:{
			cout<<"It's December";
			cout<<"\nDays In Month : "<<"31";
			break;
		}
		default:{
			cout<<"Enter Valid Month Number";
			break;
		}
	}

return 0;
}
