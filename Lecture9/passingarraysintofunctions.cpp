#include<iostream>
using namespace std;

// arrays are by default pass by refrence
void updatearray(int a[],int n){
	for (int i = 0; i <n; ++i)
	{
		a[i]=a[i]+1;
	}
	cout<<endl;

	// a={2,3,4,5,6};


}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	// print

 	cout<<"before update : "<<endl;
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl; //1 2 3 4 5


	updatearray(arr,n);

	cout<<"after update : "<<endl;

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;// 2 3 4 5 6

	return 0;
}