#include <iostream>
using namespace std;
int main()
{
	int arr[4][5]={{42,52,62,72,98},{41,81,82,92,32},{4,7,9,12,99},{39,44,66,76,81}};
	string sub[5]={"Hindi","English","Maths","Social Science","Science"};
	string name[4]={"Yash","Goldi","Amit","Payal","Chatgpt"}
	for(int i=0;i<5;i++){
		cout<<sub[i]<<"\t";
	}
	cout<<endl;
	int ttl=0;
	int cttl=0;
	bool r=true;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			cout<<arr[i][j]<<"\t";
			ttl+=arr[i][j];
			if(arr[i][j]<35){
				r=false;
			}
			
		}
		if(cttl<ttl and r==true){
			cttl=ttl;
		}
		cout<<ttl<<"\t"<<float(ttl)/5.0<<" %"<<"\t";
		if(r)
		cout<<"Result : Pass "<<endl;
		else
		cout<<"Result : Fail "<<endl;
		ttl=0;
		r=true;
	}
	int t=0;
	
	//cout<<"hello  "<<t<<endl;
	for(int j=0;j<5;j++){
		for(int i=0;i<4;i++){
			if(arr[i][j]>t){
				t=arr[i][j];
			}
		}
		cout<<endl;
		cout<<sub[j]<<" : "<<t<<"\t"<<endl;
		t=0;
	}
	cout<<"Class Topper : "<<cttl;
	
return 0;
}
