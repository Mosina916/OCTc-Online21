#include<iostream>
using namespace std;

void update(int*u){
	// *u -->y
	*u=*u+20;

	cout<<*u<<endl;//110

}
int main(){

	int y=90;
	// int*yptr=&y;


	cout<<"y is : "<<y<<endl;//90
	update(&y);
	cout<<"y is : "<<y<<endl;//110

	return 0;
}