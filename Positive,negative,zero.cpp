#include<iostream>
using namespace std;
void numbers(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	if(number>0){
		cout<<"Number is Positive";
	}
	else if(number==0){
		cout<<"Number is Zero";
	}
	else if(number<0){
		cout<<"Number is Negative";
	}
}
int main(){
	numbers();
	return 0;
}
