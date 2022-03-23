#include <iostream>
using namespace std;
int mincost(int cost[4][4],int i,int j){
	// base case
	if(i==0&&j==0){
		return cost[i][j];
	}
	if(j<0||i<0){
		return INT_MAX;
	}


	// recursive case
	int op1=mincost(cost,i-1,j);
	int op2=mincost(cost,i,j-1);

	return min(op1,op2)+cost[i][j];


}


int mincosttd(int cost[4][4],int i,int j,int arr[100][100]){
	// base case
	if(i==0&&j==0){
		return arr[i][j]=cost[i][j];
	}
	if(j<0||i<0){
		return INT_MAX;
	}

	if(arr[i][j]!=-1){
		return arr[i][j];
	}


	// recursive case
	int op1=mincosttd(cost,i-1,j,arr);
	int op2=mincosttd(cost,i,j-1,arr);

	return arr[i][j]=min(op1,op2)+cost[i][j];


}

int bottomup(int cost[][4],int i,int j){
	int arr[100][100];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			// top down ka base case tha initilization condition bana dii
			if(i==0&&j==0){
				arr[i][j]=cost[i][j];
			}
			else if(i==0){
				arr[i][j]=cost[i][j]+arr[i][j-1];
			}
			else if(j==0){
				arr[i][j]=cost[i][j]+arr[i-1][j];
			}
			else{
				arr[i][j]=min(arr[i-1][j],arr[i][j-1])+cost[i][j]; 
			}
		}
	}

	for (int i = 0; i <4; ++i)
	{
		for (int j = 0; j <4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;


	return arr[i][j];






}


int main(){
	int cost[4][4]={
		{2,1,3,4},
		{3,1,1,10},
		{1,6,1,1},
		{2,7,4,3}
	};
// dest 2,3

	cout<<"simple recursion "<<mincost(cost,2,3)<<endl;

	int arr[100][100];

	// for (int i = 0; i <100; ++i)
	// {
	// 	for (int j = 0; j<100;j++)
	// 	{
	// 		arr[i][j]=-1;
	// 	}
	// }

	// cout<<endl;
	memset(arr,-1,sizeof(arr));

	cout<<"top down "<<mincosttd(cost,2,3,arr)<<endl;


	for (int i = 0; i <4; ++i)
	{
		for (int j = 0; j <4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;

	cout<<"bottom up "<<endl<<bottomup(cost,2,3)<<endl;
	


	return 0;
}