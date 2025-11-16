#include<iostream>
using namespace std;
float celsius(float temperature){
	float changetemp;
	changetemp=(temperature-32)*5.0/9.0;
	return changetemp;
}
float kelvin(float temperature){
	float changeoftemp;
	changeoftemp=(temperature+273.15);
	return changeoftemp;
}
float tocelsius(float temperature){
	float changeoftemp;
	changeoftemp=(temperature-273.15);
	return changeoftemp;
}
float fahrenheit(float temperature){
	float changeoftemp;
	changeoftemp=(temperature*9.0/5.0)+32;
	return changeoftemp;
}
int main(){
	int option;
	float temperature,result;
	cout<<"                    Temperature Convertor"<<endl<<endl;
	cout<<"                    Enter Conversion Type \n1.Farenhite to Celsius          2.Celsius to Farenhite\n3.Celsius to Kelvin             4.Kelvin to Celsius\n5.Farenhite to Kelvin           6.Kelvin to Farenhite\nEnter:";
	cin>>option;
	if(option==1){
		cout<<"Enter Your Temperature in Farenhite:";
	cin>>temperature;
	cout<<"Temperature = "<<celsius(temperature)<<"C";
	}
	else if(option==2){
		cout<<"Enter Your Temperature in Celsius:";
	cin>>temperature;
	cout<<"Temperature = "<<fahrenheit(temperature)<<"F";
	}
	else if(option==3){
		cout<<"Enter Your Temperature in Celsius:";
	cin>>temperature;
	cout<<"Temperature = "<<kelvin(temperature)<<"K";
	}
	else if(option==4){
		cout<<"Enter Your Temperature in Kelvin:";
	cin>>temperature;
	cout<<"Temperature = "<<tocelsius(temperature)<<"C";
	}
	else if(option==5){
		cout<<"Enter Your Temperature in Farenhite:";
	cin>>temperature;
	result=celsius(temperature);
	cout<<"Temperature = "<<kelvin(result)<<"K";
	}
	else if(option==6){
		cout<<"Enter Your Temperature in Kelvin:";
	cin>>temperature;
	result=tocelsius(temperature);
	cout<<"Temperature = "<<fahrenheit(result)<<"F";
	}
	else{
		cout<<"Invalid Option";
	}
	return 0;
}
