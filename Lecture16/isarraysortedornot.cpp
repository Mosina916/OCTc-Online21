#include<iostream>
using namespace std;
bool isarraysortedornot(int *arr,int n){
	// base case
	if(n==1){//single element bacha hai
		return true;

	}

	// recursive case
	if(arr[0]<=arr[1]&&isarraysortedornot(arr+1,n-1)){
		return true;

	}
	return false;

}



bool isarraysortedornot2(int *arr,int n){
	// base case
	if(n==1){
		return true;
	}
	 
	// recursive case
	if(isarraysortedornot2(arr,n-1)&&arr[n-2]<=arr[n-1]){
		return true;

	}
	return false;

}

// 3rd way 


// iterator

bool isarraysortedornot3(int*arr,int n,int i){
	// base case
	if(i==n-1){
		return true;

	}


	// recursive case
	if(arr[i]<=arr[i+1]&&isarraysortedornot3(arr,n,i+1)){
		return true;
	}
	else{
		return false;
	}
}



int main(){
	int arr[]={1,4,5,4,7,9};
	int n=sizeof(arr)/sizeof(int);//total elements
	// if(isarraysortedornot(arr,n)){
	// // 	cout<<"yes array is sorted"<<endl;
	// // }
	// // else{
	// // 	cout<<"No aaray is not sorted"<<endl;

	// }

	// if(isarraysortedornot2(arr,n)){
	// 	cout<<"yes array is sorted"<<endl;
	// }
	// else{
	// 	cout<<"No aaray is not sorted"<<endl;

	// }


	if(isarraysortedornot3(arr,n,0)){
		cout<<"yes array is sorted"<<endl;
	}
	else{
		cout<<"No aaray is not sorted"<<endl;

	}






	return 0;
}