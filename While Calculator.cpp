#include<iostream>
using namespace std;
float sum(int num1,int num2){
	return num1+num2;
}
float multi(int num1,int num2){
	return num1*num2;
}
float divide(float num1,float num2){
	return num1/num2;
}
float sub(int num1,int num2){
	return num1-num2;
}
int main()
{
	char op;
	float num2,result,total;
	cout<<"Enter Number 1:";
	cin>>total;
	while(true){
		cout<<"Enter your Operator(+,-,/,*,= for end):";
		cin>>op;
		if(op=='=')
		{
			cout<<"Result = "<<total;
			break;
		}
		cout<<"Enter Your Number 2:";
		cin>>num2;
		switch(op)
		{
			case '+':
		total=sum(total,num2);
		total=result;
		break;
		case '-':
		total=sub(total,num2);
		break;
		case '*':
		total=multi(total,num2);
		break;
		case '/':
		total=divide(total,num2);
		break;
		default:
			cout<<"Invalid";
			break;
		}
	}
	return 0;
}
