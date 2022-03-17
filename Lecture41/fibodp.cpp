#include<iostream>
using namespace std;
// recursive sol
int fibo(int n){
	// base case
	if(n==0||n==1){
		return n;
	}
	// recursive case
	return fibo(n-1)+fibo(n-2);

}

// top down


int fibotopdown(int n,int*dp){
	// base case
	if(n==0||n==1){
		return dp[n]=n;
	}
	// calculate karne se pehle check karo arr mai already claculated tou nahi hai
	if(dp[n]!=-1){
		return dp[n];
	}
	// recursive case
	// return karne se pehle store karna hai arr
	// arr[n]=fibotopdown(n-1,arr)+fibotopdown(n-2,arr);
	return dp[n]=fibotopdown(n-1,dp)+fibotopdown(n-2,dp);

}


// bottom up 


int fibobottomup(int n){
	int *dp=new int[n+1];
	// top down base case initilization condition
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}


	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;

	return dp[n];


}


int main(){
	int n;
	cin>>n;
	
	int*arr=new int[n+1];
	// int arr[1000]={0};
	// memset
	// memset(arr,-1,sizeof(arr));
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}


	// topdown
	cout<<"top down "<<fibotopdown(n,arr)<<endl;

	cout<<"Bottom up "<<fibobottomup(n)<<endl;


	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	cout<<"simple recursion "<<fibo(n)<<endl;//recursive call



	return 0;
}