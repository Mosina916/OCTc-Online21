#include<iostream>
using namespace std;
int main(){


	int arr[10];

// input

	for(int i=0;i<=9;i++){
		cin>>arr[i];

	}


	for(int i=9;i>=0;i=i-1){
		cout<<arr[i]<<" ";

	}

	// int n;
	// cin>>n;//10^6 se badi -->galat
	// int arr[n];//galat 







	return 0;
}