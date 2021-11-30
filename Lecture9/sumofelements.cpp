#include<iostream>
using namespace std;

int sum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];//6+2-->8+3

	}

	return sum;


}
int main(){
	int arr[]={6,2,3,8,4,5};
	int n=sizeof(arr)/sizeof(int);
	// print

	cout<<"sum is : "<<sum(arr,n)<<endl;

 	

	return 0;
}