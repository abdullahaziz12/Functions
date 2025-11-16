#include<iostream>
using namespace std;
int discounted(int price,int discount){
	int discountedvalue=(price*discount)/100;
	return discountedvalue;
}
int main(){
	int price,discount;
	cout<<"Enter Price:";
	cin>>price;
	cout<<"Enter Discount:";
	cin>>discount;
	cout<<"Price = "<<price<<endl;
	cout<<discount<<"% Discount = "<<discounted(price,discount)<<endl;
	cout<<"Total Price After Discount = "<<price-discounted(price,discount);
	return 0;
}
