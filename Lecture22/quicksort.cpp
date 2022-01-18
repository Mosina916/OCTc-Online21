#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int partition(int *arr,int s,int e){
	int i=s-1;
	int pivot=arr[e];
	int j;
	for(j=s;j<e;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);

		}
	}
	swap(arr[i+1],arr[j]);
	return i+1;
}
void quicksort(int *arr,int s,int e){
	// base case
	if(s>=e){
		return;
	}




	// 
	int indx=partition(arr,s,e);
	quicksort(arr,s,indx-1);
	quicksort(arr,indx+1,e);


}
int main(){
	int arr[]={5,3,2,7,8,1};
	int n=sizeof(arr)/sizeof(int);

	quicksort(arr,0,n-1);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	

	return 0;
}