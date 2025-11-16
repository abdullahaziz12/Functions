#include<iostream>
using namespace std;
float tocelsius(float temperature){
	float changeoftemp;
	changeoftemp=(temperature-273.15);
	return changeoftemp;
}
int main(){
	float temperature;
	cout<<"Enter Your Temperature in Kelvin:";
	cin>>temperature;
	cout<<"Temperature = "<<tocelsius(temperature)<<"C";
	return 0;
}
