#include<iostream>
using namespace std;
// call by value
void updatex(int x){
	x=x+20;
	cout<<"value of x in updatex is: "<<x<<endl;//30


	// return x;

}
int main(){
	int x=10;
	cout<<"value of x in main is: "<<x<<endl;//10

	updatex(x);
	// cout<<updatex(x);

	cout<<"value of x in main after upadatex is: "<<x<<endl; //10



	return 0;
}