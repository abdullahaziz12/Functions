#include<iostream>
#include<cmath>
using namespace std;
int equation(int a,int b,int c,int d){
	int a3,b3,c3,d3;
	a3=pow(a,3);
	b3=pow(b,3);
	c3=pow(c,3);
	d3=pow(d,3);
	if(a3+b3+c3==d3){
	return 0;
	}
	else{
		return -1;
	}
}
int main(){
	int a,b,c,d;
	cout<<"Statisfying the Equation a3+b3+c3=d3"<<endl;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Enter c:";
	cin>>c;
	cout<<"Enter d:";
	cin>>d;
	cout<<equation(a,b,c,d);
	return 0;
}
