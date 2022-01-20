#include<iostream>
using namespace std;
// sma

// int* f(int n){
// 	// array dynamically
// 	int arr[100];//4
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}

// 	return arr;

// }

// dma
int* f(int n){
	// array dynamically
	int *arptr=new int[n];//4
	for(int i=0;i<n;i++){
		cin>>arptr[i];
	}

	return arptr;

}

int f1(int k){
	k=k+1;
	return k;
}

int main(){


	// cout<<f1(3);
	int n;
	cin>>n;//4
	int*kptr=f(n);


	for(int i=0;i<n;i++){

		// cout<<kptr[i]<<" ";


		cout<<*(kptr+i)<<" ";

	}
	cout<<endl;


	delete[] kptr;
	kptr=NULL;





	return 0;
}