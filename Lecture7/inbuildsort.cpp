#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={3,6,5,8,4};
	// int arr[]={3,4,5,1,2,6,8,3,0,2,7,9,7,7,7,3,2,2,2,1,0};//o/p-->1 2 3 4 5
	int totalbuckets=sizeof(arr)/sizeof(int);//20/4-->
	// 3 4 5 1 2
	// // int n=5;
	// int n;
	// int arr[100];
	// cin>>n;//5
	// for (int i = 0; i < n; ++i)
	// {
	// 	cin>>arr[i];
	// }



	cout<<"before sort  : "<<endl;

	for (int i = 0; i <totalbuckets; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	// sort(arrayname,arrayname+size);

	sort(arr,arr+totalbuckets);

	


	cout<<"after inbuild sort  : "<<endl;

	for (int i = 0; i <totalbuckets; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	



	return 0;
}