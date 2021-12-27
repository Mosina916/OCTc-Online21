#include<iostream>
using namespace std;
bool is7presentornot(int*arr,int n){
	// base case
	if(n==0){
		return false;
	}


	// recursive case
	if(arr[0]==7){
		return true;
	}
	// if(is7presentornot(arr+1,n-1)==true){
	// 	return true;
	// }
	// else{
	// 	return false;
	// }
	return is7presentornot(arr+1,n-1);

}



int firstindexof7(int*arr,int n,int i){
	// base case
	if(i==n){
		return -1;
	}


	// recursive case
	if(arr[i]==7){//i==0
		return i;

	}
	return firstindexof7(arr,n,i+1);

}




int main(){
	// int arr[]={6,8,4,17,9};
	// int n=sizeof(arr)/sizeof(int);//5

	// if(is7presentornot(arr,n)){
	// 	cout<<"7 is present"<<endl;
	// }
	// else{
	// 	cout<<"7 is not present"<<endl;


	// }


	int arr[]={6,3,45,56,7,3,7,4,7,6};
	int n=sizeof(arr)/sizeof(int);//5
	int indx=firstindexof7(arr,n,0);

	if(indx==-1){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<"7 is present at index "<<indx<<endl;
	}

	


	return 0;
}