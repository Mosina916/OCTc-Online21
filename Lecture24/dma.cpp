#include<iostream>
using namespace std;

int main(){
	// static memory allocate variable
	// int a;
	// a=10;


	// cout<<a<<endl;

	// int*ptr=new int;
	// *ptr=10;

	char*ptr=new char;
	*ptr='A';

	cout<<(void*)ptr<<endl;
	cout<<*ptr<<endl;


	// floAT
	// float f;
	// f=40.90;


	// float*fptr=new float;
	// *fptr=40.90;
	// cout<<*fptr<<endl;


// array 
	// sma
	// int arr[1000];


	// for(int i=0;i<5;i++){
	// 	cin>>arr[i];
	// }
	// int n;
	// cin>>n;
	// int arr[n];//10^6

	// dma

	// int*arrptr=new int[1000];
	int n;
	cin>>n;//10^9
	int*arrptr=new int[n];

	for(int i=0;i<n;i++){
		// cin>>arrptr[i];
		cin>>*(arrptr+i);
	}


	for(int i=0;i<n;i++){
		cout<<arrptr[i];
		// cout<<*(arrptr+i);
	}


	// variable 
	delete ptr;//link delete
	ptr=NULL;



	// array

	delete[] arrptr;
	arrptr=NULL;

















	



	return 0;
}