#include<iostream>
using namespace std;
int decimaltobinary(int decimal){
	int remainder,ans=0,power=1;
	while(decimal>0){
		remainder=decimal%2;
		decimal=decimal/2;
		ans+=(remainder*power);
		power=power*10;
	}
	return ans;
}
int main(){
	int decimal;
	cout<<"Enter Decimal Numbr:";
	cin>>decimal;
	cout<<"Binary = "<<decimaltobinary(decimal);
	return 0;
}
