#include<iostream>
using namespace std;
void bubblesortrec(int*arr,int n,int i){ //5 7 6 3 4 
		// base case
		if(i==n-1){
			return;
		}


		// recursive case
		for(int j=0;j<=n-2-i;j++){//3<=2
		if(arr[j]>arr[j+1]){
			
			swap(arr[j],arr[j+1]);//inbuild swap

		}

	}
	 //5 6 3 4 7
	 bubblesortrec(arr,n,i+1);//3 4 5 6 7

	}

// pure rec form
void bubblesortrecpure(int*arr,int n,int i,int j){


		// base case
		if(i==n-1){
			return;
		}

		if(j==n-1-i){
			bubblesortrecpure(arr,n,i+1,0);//3 4 5 6 7

		}
		else{
			if(arr[j]>arr[j+1]){
			
			swap(arr[j],arr[j+1]);//inbuild swap

		}
		bubblesortrecpure(arr,n,i,j+1);


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
	// bubblesortrec(arr,n,0);
	//7 3 9 0-->0 3 7 9


	bubblesortrecpure(arr,n,0,0);



	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	// sort(arr,arr+n);
	



	return 0;
}