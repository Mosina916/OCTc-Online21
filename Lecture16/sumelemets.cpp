#include<iostream>
using namespace std;

int sumofelements(int *arr,int n){
	// base case
	if(n==1){
		return arr[0];
	}


	// recursive case
	return arr[0]+sumofelements(arr+1,n-1);

}


int sumofelements2(int *arr,int n){
	// base case
	if(n==1){
		return arr[0];
	}


	// recursive case
	return sumofelements2(arr,n-1)+arr[n-1];

}



int main(){
	int arr[]={1,4,4,7,9};//25
	int n=sizeof(arr)/sizeof(int);//total elements

	cout<<sumofelements(arr,n)<<endl;
	cout<<sumofelements2(arr,n)<<endl;







	return 0;
}