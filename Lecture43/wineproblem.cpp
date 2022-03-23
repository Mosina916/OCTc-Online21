#include <iostream>
using namespace std;
int wineproblem(int*price,int l,int r,int day){
	// base case
	if(l>r){
		return 0;
	}


	// recursive case
	int op1=price[l]*day+wineproblem(price,l+1,r,day+1);
	int op2=price[r]*day+wineproblem(price,l,r-1,day+1);
	return max(op1,op2);


}


int wineproblemtd(int*price,int l,int r,int day,int arr[100][100]){
	// base case
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=-1){
		return arr[l][r];
	}


	// recursive case
	int op1=price[l]*day+wineproblemtd(price,l+1,r,day+1,arr);
	int op2=price[r]*day+wineproblemtd(price,l,r-1,day+1,arr);
	return arr[l][r]=max(op1,op2);


}
int wineproblembup(int*price,int l,int r,int day,int n){
	int dp[100][100]={0};
	// diagonal fill 
	for(int i=0;i<n;i++){
		dp[i][i]=n*price[i];
	}

	for(int i=n-2;i>=0;i--){
		for(int j=0;j<n;j++){
			if(i<j){
				int day=n-(j-i);//5-(4-3)//4
				int op1=day*price[i]+dp[i+1][j];
				int op2=day*price[j]+dp[i][j-1];
				dp[i][j]=max(op1,op2);


			}

		}
	}

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j <n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	return dp[0][n-1];



}
int main(){
	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);//5
	cout<<"simple recursion : "<<wineproblem(price,0,n-1,1)<<endl;
	int arr[100][100];
	for (int i = 0; i <100; ++i)
	{
		for (int j = 0; j < 100;j++)
		{
			arr[i][j]=-1;
		}
	}

	cout<<endl;





	cout<<"Top down : "<<wineproblemtd(price,0,n-1,1,arr)<<endl;
	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j <n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;

	cout<<"Bottom up : "<<endl<<wineproblembup(price,0,n-1,1,n)<<endl;
	

	cout<<endl;



	return 0;
}