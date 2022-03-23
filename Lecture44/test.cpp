#include <iostream>
using namespace std;
// simple recursion
int elephantways(int i,int j){
	// base case 
	if(i==0&&j==0){
		return 1;
	}


	// /recursive case
	int ans=0;
	// col

	for(int k=0;k<i;k++){
		ans=ans+elephantways(k,j);//21
	}
	// row 
	for(int k=0;k<j;k++){
		ans=ans+elephantways(i,k);//25+12-->37
	}


	return ans;

}

// top down 
int elephantwaystd(int i,int j,int arr[][100]){
	// base case 
	if(i==0&&j==0){
		return arr[i][j]=1;
	}
	// calculate karne se pehle check karugi 
	if(arr[i][j]!=-1){
		return arr[i][j];
	}

	// /recursive case
	int ans=0;
	// col

	for(int k=0;k<i;k++){
		ans=ans+elephantwaystd(k,j,arr);//21
	}
	// row 
	for(int k=0;k<j;k++){
		ans=ans+elephantwaystd(i,k,arr);//25+12-->37
	}
	return arr[i][j]=ans;

}

// bottom up

int bottomup(int i,int j){
	int dp[100][100]={0};

	for(int l=0;l<=i;l++){
		for(int m=0;m<=j;m++){
			if(l==0&&m==0){
				dp[l][m]=1;
			}
			else{
				int ans=0;
				// col
				for(int k=0;k<i;k++){
					ans=ans+dp[k][m];


				}
				// row
				for(int k=0;k<j;k++){
					ans=ans+dp[l][k];


				}

				dp[l][m]=ans;


			}

		}

	}
	for (int l = 0; l <=i ;l++)
	{
		for(int m=0;m<=j;m++){
			cout<<dp[l][m]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	return dp[i][j];




}
int main(){

	int i,j;
	cin>>i>>j;
	// 3 2

	cout<<"simple recursion : "<<elephantways(i,j)<<endl;

	int arr[100][100];
	memset(arr,-1,sizeof(arr));

	cout<<"Top down  : "<<elephantwaystd(i,j,arr)<<endl;

	for (int l = 0; l <=i ;l++)
	{
		for(int m=0;m<=j;m++){
			cout<<arr[l][m]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"Bottom up  : "<<endl<<bottomup(i,j)<<endl;





	return 0;
}