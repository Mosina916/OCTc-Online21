#include<iostream> 
using namespace std;
int binarysearchrec(int *arr,int s,int e,int key){

	// base case
	if(s>e){
		return -5;
	}


	// recursive case
	int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(key<arr[mid]){
		return binarysearchrec(arr,s,mid-1,key);
	}
	else{
		return binarysearchrec(arr,mid+1,e,key);
	}
	
	
}
int main(){
	int n;
	int arr[100];
	cin>>n;//4
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<binarysearchrec(arr,0,n-1,key)<<endl;
	



	return 0;
}