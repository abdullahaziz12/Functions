#include<iostream>
using namespace std;
float celsius(float temperature){
	float changetemp;
	changetemp=(temperature-32)*5/9;
	return changetemp;
}
float kelvin(float temperature){
	float changeoftemp;
	changeoftemp=(temperature+273.15);
	return changeoftemp;
}
int main(){
	float temperature,result;
	cout<<"Enter Your Temperature:";
	cin>>temperature;
	result=celsius(temperature);
	cout<<"Temperature = "<<kelvin(result)<<"K";
	return 0;
}
