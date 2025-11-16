#include<iostream>
using namespace std;
void print(){
	cout<<"Helllo\n";
}

int sum(){
	int num1,num2,sum;
	cout<<"Enter Number 1:";
	cin>>num1;
	cout<<"Enter Number 2:";
	cin>>num2;
	sum=num1+num2;
	return sum;
}
int sum2(int num1,int num2){
	return num1+num2;
}
int main()
{
	int num1,num2;
	cout<<"Enter Number 1:";
	cin>>num1;
	cout<<"Enter Number 2:";
	cin>>num2;
	//print();
	int result;
	//result=sum();
	//cout<<"Result:"<<result;
	cout<<sum2(num1,num2);
	//result=sum2(num1,num2);
	//cout<<"Result:"<<result;
	
	
}
