#include<iostream>
using namespace std;
int main(){
	// int arr[]={3,4,5,1,2};//o/p-->1 2 3 4 5
	// int n=sizeof(arr)/sizeof(n);
	// 3 4 5 1 2
	// int n=5;
	int n;
	int arr[100];
	cin>>n;//5
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}



	cout<<"before selectionsort  : "<<endl;

	for (int i = 0; i <5; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	

	// selectionsort sort
	for(int pos=0;pos<=n-2;pos++){//pos-->kaam kar raha hai kis position pe dalna hai
		int min=pos;
// sabse minimum find karne ka kaam j wala loop kara rha hai
		for(int j=pos+1;j<=n-1;j++){
		if(arr[j]<arr[min]){
			min=j;
		}
	}
	swap(arr[min],arr[pos]);


	}


	

	
	




	cout<<"after selectionsort  : "<<endl;

	for (int i = 0; i <5; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	

	



	return 0;
}