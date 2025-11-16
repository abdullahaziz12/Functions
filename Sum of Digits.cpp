#include<iostream>
using namespace std;
int sumofdigits(int number){
	int lastdigit=0,sum=0;
	while(number>0){
		lastdigit=number%10;
		number=number/10;
		sum+=lastdigit;
	}
	return sum;
}
int main(){
	int number,result;
	cout<<"Enter Your Number:";
	cin>>number;
	result=sumofdigits(number);
	cout<<"Sum of Digits = "<<result;
	return 0;
}
