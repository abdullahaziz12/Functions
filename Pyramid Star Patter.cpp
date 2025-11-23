#include<iostream>
using namespace std;
void pyramidpattern(int number){
	for(int i=1;i<=number;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	int number;
	cout<<"Enter Your Number:";
	cin>>number;
	pyramidpattern(number);
	return 0;
}

