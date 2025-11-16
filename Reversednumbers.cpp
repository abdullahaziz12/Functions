#include<iostream>
using namespace std;
int reversenumber(int number){
	int reverse=0;
	while(number>0){
		reverse=reverse*10+number%10;
		number=number/10;
	}
	return reverse;
}
int main(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	cout<<"Reversed Number = "<<reversenumber(number);
	return 0;
}
