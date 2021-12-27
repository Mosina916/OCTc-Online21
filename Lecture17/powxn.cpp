#include<iostream>
using namespace std;
int powerxn(int x,int n){//2 0
	// base case
	if(n==0){
		return 1;
	}


	// recursive case
	return x*powerxn(x,n-1);//2 -1-->2*8

}
int main(){
	int x,n;
	cin>>x>>n;//2 4
	cout<<"power of x and n is :"<<powerxn(x,n)<<endl;


	return 0;
}