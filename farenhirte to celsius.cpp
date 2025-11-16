#include<iostream>
using namespace std;
float celsius(float temperature){
	float changetemp;
	changetemp=(temperature-32)*5/9;
	return changetemp;
}
int main(){
	float temperature;
	cout<<"Enter Your Temperature in Farenhite:";
	cin>>temperature;
	cout<<"Temperature = "<<celsius(temperature)<<"C";
	return 0;
}
