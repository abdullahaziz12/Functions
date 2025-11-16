#include<iostream>
using namespace std;
int multi(int num1,int num2){
	return num1*num2;
}
int main()
{
	int num1,num2,result;
	cout<<"Enter Number 1:";
	cin>>num1;
	cout<<"Enter Number 2:";
	cin>>num2;
	result=multi(num1,num2);
	cout<<"Result = "<<result;
	return 0;
}
