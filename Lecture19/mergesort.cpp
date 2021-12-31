#include<iostream>
using namespace std;
void mergetwosortedarrays(int *arr,int s,int e){
	int mid=(s+e)/2;//3
	int i=s;//3
	int j=mid+1;//4
	int k=s;//3
	int temp[10000];

	while(i<=mid&&j<=e){
		if(arr[i]<arr[j]){
			temp[k]=arr[i];
			i++;
			k++;

	}
	else{
		temp[k]=arr[j];
		k++;//1
		j++;//5

	}

	}
	while(i<=mid){
		temp[k]=arr[i];
		i++;//1
		k++;
	}
	while(j<=e){
		temp[k]=arr[j];
		j++;
		k++;
	}


	for(int l=s;l<=e;l++){//l=3;l<=4;l++
		arr[l]=temp[l];
	}

	



}
void mergesort(int *arr,int s,int e){
	// base case
	if(s==e){
		return;
	}
	// divide
	int mid=(s+e)/2;//2;
	// sort

	mergesort(arr,s,mid);//1 2 4

	mergesort(arr,mid+1,e);// 3 5



	// merge sorted arrays
	mergetwosortedarrays(arr,s,e); //1 2 3 4 5


}
int main(){
	int arr[]={4,2,1,5,3,4,9,0,0,1,5,7};
	int n=sizeof(arr)/sizeof(int);
		cout<<"Before sorting "<<endl;
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";

	}

	cout<<endl;

	mergesort(arr,0,n-1);

	cout<<"after sorting "<<endl;
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";

	}

	cout<<endl;


	return 0;
}