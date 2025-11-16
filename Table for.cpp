#include<iostream>
using namespace std;
void table(int number)
{
	int result;
	for(int i;i<=10;i++){
		result=number*i;
		cout<<number<<"X"<<i<<"="<<result;
	}
}
int main(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	table(number);
	return 0;
}
