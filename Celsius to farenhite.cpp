#include<iostream>
using namespace std;
float farenhite(float temperature){
	float changeoftemp;
	changeoftemp=(temperature*9/5)+32;
	return changeoftemp;
}
int main(){
	float temperature;
	cout<<"Enter Your Temperature in Celsius:";
	cin>>temperature;
	cout<<"Temperature = "<<farenhite(temperature)<<"F";
	return 0;
}
