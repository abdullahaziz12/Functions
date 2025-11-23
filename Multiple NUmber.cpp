#include<iostream>
using namespace std;
void multiplenumber(int num1,int num2){
	if(num1==0 || num2==0){
		cout<<"0 is not multiple of any Number";
	}
	else if(num1%num2==0){
		cout<<num1<<" is Multiple of "<<num2;
	}
	else{
		cout<<num1<<" is not Multiple of "<<num2;
	}
}
int main(){
	int num1,num2;
	cout<<"Enter Your Number:";
	cin>>num1;
	cout<<"Enter Your NUmber:";
	cin>>num2;
	multiplenumber(num1,num2);
	return 0;
}
