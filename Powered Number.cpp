#include<iostream>
#include<cmath>
using namespace std;
double powerednumber(double num1,double power){
	double result;
	result =pow(num1,power);
	return result;
}
int main(){
	double num1,power,result;
	cout<<"Enter Number:";
	cin>>num1;
	cout<<"Enter Power:";
	cin>>power;
	result=powerednumber(num1,power);
	cout<<"Answer = "<<result;
	return 0;
}
