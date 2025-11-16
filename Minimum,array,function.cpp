#include<iostream>
using namespace std;
void findmininumber(){
	int number[5];
	for(int i=0;i<5;i++){
		cout<<"Enter Number "<<i+1<<":";
		cin>>number[i];
	}
	int minimum=number[0];
	int index;
	for(int i=0;i<5;i++){
		if(minimum>number[i]){
			minimum=number[i];
			index=i;
		}
	}
	cout<<"Minimum Number = "<<minimum<<"\n Index = "<<index;
}
int main(){
	findmininumber();
	return 0;
}
