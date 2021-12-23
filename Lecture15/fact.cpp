#include<iostream>
using namespace std;
// recursion-->funtion calling itself

// store values
// int fact(int n){
// 	// base case stopping comdition
// 	if(n==0){
// 		return 1;

// 	}


// 	// recursive case
// 	int chotaans=fact(n-1);//pure assumption it will be always correct //6


// 	// calculate the ans with the help of abpve two steps
// 	int finalans=n*chotaans;
// 	return finalans;


// }

// without storing 
int fact(int n){
	// base case stopping comdition
	if(n==0){
		return 1;

	}
	// recursive case
	//pure assumption it will be always correct //6

	// calculate the ans with the help of abpve two steps
	return n*fact(n-1);//4*6
	


}
int main(){
	int n;
	cin>>n;//4
	cout<<"factorial is : "<<fact(n)<<endl;

	

	return 0;
}