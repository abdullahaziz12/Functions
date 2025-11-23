#include<iostream>
using namespace std;
void numbertype(int number){
	int zero=0,even=0,odd=0;
	while(number>0){
		int remainder=number%10;
		if(remainder==0){
			zero++;
		}
		else if(remainder%2==0){
			even++;
		}
		else if(remainder!=0 && remainder%2!=0 ){
			odd++;
		}
		number=number/10;
	}
	cout<<"\nEven = "<<even<<"\nOdd = "<<odd<<"\nZero = "<<zero;
}
int main(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	numbertype(number);
	return 0;
}
