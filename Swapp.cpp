#include<iostream>
using namespace std;
void swapp(int num1,int num2)
{
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	cout<<"Value of Number1 = "<<num1<<endl;
	cout<<"Value of Number1 = "<<num2;
}
int main()
{
	int num1,num2;
	cout<<"Enter Number 1:";
	cin>>num1;
	cout<<"Enter Number 2:";
	cin>>num2;
	swapp(num1,num2);
	return 0;
}
