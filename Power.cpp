 #include<iostream>
 #include<cmath>
 using namespace std;
 void exponent(){
 	int number,power,result;
 	result=1;
 	cout<<"Enter Number:";
 	cin>>number;
 	cout<<"Enter Power:";
 	cin>>power;
 	for(int i=1;i<=power;i++){
	  result=result*number;
	 }
	 cout<<"Result = "<<result;
 }
 int main(){
 	exponent();
 	return 0;
 }
