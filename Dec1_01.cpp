/*Q1.write a programme to demonstrate nested if where gender is male
and age in between 18 to 25 you are eligible to learn c++. If he got 60% above marks then the fee of student wave off otherwise payfee*/
#include <iostream>
using namespace std;
int main()
{	
	char a;
	cout<<"Enter Gender";
	cin>>a;
	
	
	if(a=='m' || a=='M'){
		cout<<"Congratulation You are male";
		int age;
		cout<<"Enter Age";
		cin>>age;
		if(age>=18 && age<=25){
			cout<<"You're Eligible To learn C++";
			float per;
			cout<<"Enter Percentage";
			cin>>per;
			if(per<=60){
				cout<<"Your Fee Wave Off";
			}
			else{
				cout<<"Payfee";
			}
		}
		else{
			cout<<"You're not Eligible To learn C++";
		}
	}else{
		cout<<"First become Male";
	}

return 0;
}
 