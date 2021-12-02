#include<iostream>
using namespace std;
int main(){

	int radius=2;
	// int*rptr=&radius;

	// int*rptr;//rptr mai gaya hoga garbage value

	// we intilize the pointers when decleared
	int *rptr=NULL;


	// int *rptr=0;

	rptr=&radius;



	// *rptr is same as radius



	cout<<"circumfrenec of circle is : "<<2*3.14*(*rptr)<<endl;


	return 0;
}