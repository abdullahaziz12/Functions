#include<iostream>
using namespace std;
void numbers(int number){
	if(number%2==0)
	{
		cout<<"Your Number is Even...";
	}
	else{
		cout<<"Your Number is Odd...";
	}
}
int main(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	numbers(number);
    return 0;
}
