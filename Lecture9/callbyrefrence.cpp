#include<iostream>
using namespace std;
// call by refrence by refrence variable


void updatex(int &a){
	a=a+20;
	cout<<"value of x in updatex is: "<<a<<endl;//30


	// return x;

}
int main(){
	int x=10;
	// int &a=x;
	cout<<"value of x in main is: "<<x<<endl;//10

	updatex(x);
	// cout<<updatex(x);

	cout<<"value of x in main after upadatex is: "<<x<<endl; //30



	return 0;
}