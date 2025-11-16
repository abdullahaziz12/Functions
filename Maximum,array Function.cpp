#include<iostream>
using namespace std;
void findmaxnumber(){
	int number[5];
	for(int i=0;i<5;i++){
		cout<<"Enter Your Number "<<i+1<<":";
		cin>>number[i];
	}
	int index;
	int maximum=number[0];
	for(int i=0;i<5;i++){
		if(maximum<number[i])
		{
			maximum=number[i];
			index=i;
		}
	}
	cout<<"Maximum Number = "<<maximum<<"\nIndex = "<<indexfindmaxnumber;
}
int main(){
	findmaxnumber();
	return 0;
	
}
