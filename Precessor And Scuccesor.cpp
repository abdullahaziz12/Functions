#include<iostream>
using namespace std;
void numbers(int number){
    int p,s;
	p=number-1;
	s=number+1;
	cout<<"Precessor Number of "<<number<<" is "<<p<<endl;
	cout<<"Succcessor Number of "<<number<<" is "<<s<<endl;
}
int main(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	numbers(number);
    return 0;
}
