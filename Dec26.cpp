#include <iostream>
using namespace std;
int main()
{
	int ttl=0;
	int arr[5][3]={{34,33,32},{45,45,31},{45,45,25},{45,45,45},{45,46,46}};
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" \t";
			ttl+=arr[i][j];
			
		}
		cout<<"   Total : "<<ttl;
		cout<<"    Percentage :  "<<(ttl/150.0)*100;
		cout<<endl;
		ttl=0;
	}
return 0;
}
