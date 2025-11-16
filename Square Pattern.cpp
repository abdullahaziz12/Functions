#include<iostream>
using namespace std;
void numbers(int number,string character){
	for(int i=1;i<=number;i++){
		for(int j=1;j<=number;j++){
			cout<<character;
		}
		cout<<endl;
	}
	
}
int main(){
	int number;
	string character;
	cout<<"Enter Your Number:";
	cin>>number;
	cout<<"Enter Character,Special Character:";
	cin>>character;
	numbers(number,character);
    return 0;
}
