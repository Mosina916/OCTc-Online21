#include<iostream>
using namespace std;
int minstepstoreach1(int n){
	// base case

	if(n==1){
		return 0;
	}

	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	op1=minstepstoreach1(n-1);//3
	if(n%3==0){
		op2=minstepstoreach1(n/3);
	}
	if(n%2==0){
		op3=minstepstoreach1(n/2);

	}
	return min(op1,min(op2,op3))+1;

}
// top down 
int minstepstoreach1topdown(int n,int*arr){
	// base case

	if(n==1){
		return arr[n]=0;
	}


	// calculate karne se pehle check
	if(arr[n]!=-1){
		return arr[n];

	}

	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	op1=minstepstoreach1topdown(n-1,arr);//1
	if(n%3==0){
		op2=minstepstoreach1topdown(n/3,arr);//int max
	}
	if(n%2==0){
		op3=minstepstoreach1topdown(n/2,arr);//1

	}

	// return karne se pehle store
	return arr[n]=min(op1,min(op2,op3))+1;

}


// botoom up

int minstepstoreach1bottomup(int n){
	int *arr=new int[n+1];

	arr[1]=0;

	int op1,op2,op3;

	for(int i=2;i<=n;i++){
		op1=op2=op3=INT_MAX;
		op1=arr[i-1];
		if(i%2==0){
			op2=arr[i/2];
		}
		if(i%3==0){
			op3=arr[i/3];
		}
		arr[i]=min(op1,min(op2,op3))+1;

	}
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return arr[n];

}

int main(){
	int n;
	cin>>n;//always greater than zero
	cout<<"simple recursion "<<minstepstoreach1(n)<<endl;

	int *arr=new int[n+1];
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}

	cout<<"Top down "<<minstepstoreach1topdown(n,arr)<<endl;

	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	cout<<"bottom up "<<minstepstoreach1bottomup(n)<<endl;




	return 0;
}