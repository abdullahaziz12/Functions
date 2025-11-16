#include<iostream>
using namespace std;
int sum(int num1,int num2){
	return num1+num2;
}
int multi(int num1,int num2){
	return num1*num2;
}
float divide(float num1,float num2){
	return num1/num2;
}
int sub(int num1,int num2){
	return num1-num2;
}
int main()
{
	char op;
	float num1,num2,result;
	cout<<"Enter Your Number 1:";
	cin>>num1;
	cout<<"Enter Your Operator(+,-,/,*):";
	cin>>op;
	cout<<"Enter Your Number 2:";
	cin>>num2;
	switch(op)
	{
		case '+':
		result=sum(num1,num2);
		cout<<"Result = "<<result;
		break;
		case '-':
		result=sub(num1,num2);
		cout<<"Result = "<<result;
		break;
		case '*':
		result=multi(num1,num2);
		cout<<"Result = "<<result;
		break;
		case '/':
		result=divide(num1,num2);
		cout<<"Result = "<<result;
		break;
		default:
			cout<<"Invalid";
			break;
	}
 return 0;
}
