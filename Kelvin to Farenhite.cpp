#include<iostream>
using namespace std;
float tocelsius(float temperature){
	float changeoftemp;
	changeoftemp=(temperature-273.15);
	return changeoftemp;
}
float farenhite(float temperature){
	float changeoftemp;
	changeoftemp=(temperature*9/5)+32;
	return changeoftemp;
}
int main(){
	float temperature,result;
	cout<<"Enter Your Temperature in Kelvin:";
	cin>>temperature;
	result=tocelsius(temperature);
	cout<<"Temperature = "<<farenhite(result)<<"F";
	return 0;
}
