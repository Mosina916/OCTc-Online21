#include<iostream>
using namespace std;
// void update(int arr[],int n){
// int arr[] or int*arr
void update(int* ar,int n){
	for (int i = 0; i <n; ++i)
	{
		ar[i]=ar[i]+1;
	}
	

}
int main(){
	int arr[]={4,5,6,7};//5 6 7 8
	int te=sizeof(arr)/sizeof(int);

	for (int i = 0; i <te; ++i)
	{
		cout<<arr[i]<<" "<<*(arr+i)<<endl;
	}
	cout<<endl;


	update(arr,te);


	for (int i = 0; i <te; ++i)
	{
		cout<<arr[i]<<" "<<*(arr+i)<<endl;
	}
	cout<<endl;


// name of array arr-->is working as pointer pointer
	// cout<<"name of array "<<arr<<endl;


	// arr-->internal pointer

	// cout<<arr<<"    "<<&arr[0]<<endl;

	// cout<<arr+1<<"    "<<&arr[1]<<endl;



	


	return 0;
}