#include<iostream>
using namespace std;
void reverse(int number){
	while(number>0){
		int remainder=number%10;
	    number=number/10;
	    cout<<remainder;
	}
}
int main(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	reverse(number);
	return 0;
}
