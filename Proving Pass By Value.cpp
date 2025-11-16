#include<iostream>
using namespace std;
int increment(int number){
	number++;
	return number;
}
int main(){
	int number;
	number=5;
	int Incrementedfun=increment(number);
	cout<<"Value of Variable = "<<number<<endl;
	cout<<"Incremented Value Of Function = "<<Incrementedfun<<"\n Hence Proved in Pass By Value,Value of Varaible Remains Same";
	return 0;
}
