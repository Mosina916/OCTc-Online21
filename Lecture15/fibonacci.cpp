#include<iostream>
using namespace std;

// int fibo(int pos){
// 	// base case



// 	// recursive case
// 	int chotaans1=fibo(pos-1);//2 pure assumption
// 	int chotaans2=fibo(pos-2);//1 pure assumption


// 	// calculate final ans
// 	int finalans=chotaans1+chotaans2;
// 	return finalans;
// }



int fibo(int pos){//1
	// base case
	// if(pos==1){
	// 	return 1;
	// }
	// if(pos==0){
	// 	return 0;
	// }

	if(pos==0||pos==1){
		return pos;
	}



	// recursive case

	return fibo(pos-1)+fibo(pos-2);//1+0
	
}

int main(){
	int pos;
	cin>>pos;//4
	cout<<"fibo no is : "<<fibo(pos)<<endl;

	

	return 0;
}