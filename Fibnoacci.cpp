#include<iostream>
using namespace std;
void fibnoacci(int number){
	int a,b;
	a=1;
	b=2;
	cout<<a<<" "<<b;
	for(int i=3;i<=number;i++){
		int next=a+b;
		a=b;
		b=next;
		cout<<" "<<next;
	}
}
int main(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	fibnoacci(number);
	return 0;
}
