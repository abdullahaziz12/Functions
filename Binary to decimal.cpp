#include<iostream>
using namespace std;
int binarytodecimal(int binary){
	int ans=0,remainder,power=1;
	while(binary>0){
		remainder=binary%10;
		ans+=(remainder*power);
		binary=binary/10;
		power*=2;
	}
	return ans;
}
int main(){
	int binary;
	cout<<"Enter Binary Number:";
	cin>>binary;
	cout<<"Decimal = "<<binarytodecimal(binary);
	return 0;
}
