//c to f and k compare
#include <iostream>
using namespace std;
int main()
{
	float temp,f,k;
	cout<<"Input Temprature in Celcius : ";
	cin>>temp;
		k=temp+273.15;
		f=temp*1.8+32;
      cout<<"Temprature In Kelvin Is "<<k<<endl;
      cout<<"Temprature In Fahrenheit Is "<<f<<endl;
      if(k>f){
      	cout<<"Kelvin";
	  }
	  else{
	  	cout<<"Fahrenheit";
	  }
    

   return 0;
}
