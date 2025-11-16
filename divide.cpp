#include<iostream>
using namespace std;
float divide(float num1,float num2){
	return num1/num2;
}
int main()
{
	float num1,num2,result;
	cout<<"Enter You Number 1:";
	cin>>num1;
	cout<<"Enter You Number 2:";
	cin>>num2;
	result=divide(num1,num2);
	cout<<"Result:"<<result;
	return 0;
}
