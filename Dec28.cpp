#include <iostream>
using namespace std;

int main()
{	
	int top=0;
	int ttl=0;
	int s_top=0;
	int arr[3][3][4]={
	{{10,5,7,8},{2,7,8,10},{9,3,10,9}},
	{{10,5,7,2},{2,10,8,10},{1,3,10,9}},
	{{10,5,8,5},{2,6,8,10},{1,3,10,9}},
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<4;k++){
				cout<<arr[i][j][k]<<"\t";
				ttl+=arr[i][j][k];
			}
			cout<<"Total "<<ttl<<"\t"<<float(ttl)/0.4<<" %";
			if(top<ttl){
				top=ttl;
			}
			cout<<endl;
			ttl=0;
		}
		cout<<"Topper of the Class : "<<top;
		if(s_top<top){
			s_top=top;
		}
		top=0;
		cout<<endl<<endl;
	}
	cout<<"School Topper : "<<s_top<<endl;
return 0;
}
