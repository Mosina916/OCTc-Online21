#include<iostream> 
using namespace std;
int binarysearch(int *arr,int s,int e,int key){

	// mid calculate
// loop
	while(s<=e){
		int mid=(s+e)/2;//3
	// key mera aar[mid] pe hi hai
	if(arr[mid]==key){
		return mid;
	}
	else if(key>arr[mid]){
		s=mid+1;
	}
	else{
		e=mid-1;
	}

	}
	// key is not present
	return -5;
	
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
	cout<<binarysearch(arr,0,n-1,key)<<endl;
	



	return 0;
}