#include<iostream>
using namespace std;
int table(int number){
	void n=1,table1;
	while(n<=10)
	{
		table1=number*n;
		cout<<table1<<endl;
		n++;
	}	
}
int main()
{
	int number,result;
	cout<<"Enter Your Number:";
	cin>>number;
    table(number);
    return 0;
}
