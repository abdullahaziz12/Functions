#include<iostream>
using namespace std;
void numbers(int number){
	cout<<"Square Of "<<number<<" = "<<number*number;
}
int main(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	numbers(number);
    return 0;
}
