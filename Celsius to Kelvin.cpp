#include<iostream>
using namespace std;
float kelvin(float temperature){
	float changeoftemp;
	changeoftemp=(temperature+273.15);
	return changeoftemp;
}
int main(){
	float temperature;
	cout<<"Enter Your Temperature in Celsius:";
	cin>>temperature;
	cout<<"Temperature = "<<kelvin(temperature)<<"K";
	return 0;
}
