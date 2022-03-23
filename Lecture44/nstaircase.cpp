#include <iostream>
using namespace std;

// simple recusrion 
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

// top down
int nstaircasemodtd(int n,int k,int *arr){
	// base case
	if(n==0){
		return arr[n]=1;
	}
	if(n<0){
		return 0;
	}

	if(arr[n]!=-1){
		return arr[n];
	}

	// recursive case
	int sum=0;
	for(int i=1;i<=k;i++){
		sum=sum+nstaircasemodtd(n-i,k,arr);
	}

	return arr[n]=sum;


}

int main(){

	int n,k;
	cin>>n>>k;
	cout<<"simple recusrion : "<<nstaircasemod(n,k)<<endl;

	int arr[100];
	memset(arr,-1,sizeof(arr));
	cout<<"Top down : "<<nstaircasemodtd(n,k,arr)<<endl;

	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	



	return 0;
}