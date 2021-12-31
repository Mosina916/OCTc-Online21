#include<iostream>
using namespace std;
void mergetwosortedarrays(int *arr1,int *arr2,int m,int n){
	int i=0,j=0,k=0;
	int temp[10000];
// loop
	while(i<m&&j<n){
		if(arr1[i]<arr2[j]){
		temp[k]=arr1[i];
		k++;
		i++;

	}
	else{
		temp[k]=arr2[j];
		k++;
		j++;
	}

	}
	// uska mtlb jo arr1 hai wo bachi huvi hai
	while(i<m){
		temp[k]=arr1[i];
		i++;
		k++;

	}

	// uska mtlb jo arr2 hai wo bachi huvi hai
	while(j<n){
		temp[k]=arr2[j];
		j++;
		k++;
	}


	// print 

// 
	cout<<"sorted merged array is : "<<endl;
	for(int l=0;l<k;l++){
		cout<<temp[l]<<" ";
	}
	cout<<endl;


}
int main(){
	int arr1[]={1,3,3,5,7,9};
	int arr2[]={2,4,6,7,8,80};
	// 1 2 3 4 5 6 7 9-->o/p
	int m=6;
	int n=6;
	mergetwosortedarrays(arr1,arr2,m,n);


	return 0;
}