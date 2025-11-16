#include<iostream>
using namespace std;
int numbers(int number){
    int fact=1;
    for(int i=1;i<=number;i++){
    	fact=fact*i;
	}
	return fact;
}
int main(){
	int number,result;
	cout<<"Enter Your Number:";
	cin>>number;
	result=numbers(number);
	cout<<"Factorial of "<<number<<" = "<<result;
    return 0;
}
