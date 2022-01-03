#include<iostream>
using namespace std;
// // max steps 3 k lye 
// int nstaircase(int n){//1

// 	// base case
// 	if(n==0){
// 		return 1;
// 	}
// 	if(n<0){
// 		return 0;
// 	}

// 	// recursive case
// 	return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);

// }

// max steps 4 k lye 
int nstaircase(int n){//1

	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	// recursive case
	return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3)+nstaircase(n-4);

}


int nstaircasemod(int n,int k){
	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	// recursive case
	int sum=0;
	for(int i=1;i<=k;i++){
		sum=sum+nstaircasemod(n-i,k);
	}

	return sum;



}
int main(){
	int n;
	cin>>n;
	// cout<<"No of ways "<<nstaircase(n)<<endl;
	int k;
	cin>>k;//4

	cout<<nstaircasemod(n,k)<<endl;



	return 0;
}