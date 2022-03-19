#include<iostream>
using namespace std;
int mincoinsneededtomaketheamount(int*coins,int n,int amount){
	// base case
	if(amount==0){
		return 0;
	}
	// recursive case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){//-3
		int chotaamount=amount-coins[i];//4
		int chotans=mincoinsneededtomaketheamount(coins,n,chotaamount);//5
		if(chotans!=INT_MAX&&chotans<ans){
			ans=chotans;//2


		}


	}


	}
	return ans+1;
	
}

// top down
int mincoinsneededtomaketheamounttopdown(int*coins,int n,int amount,int *arr){
	// base case
	if(amount==0){
		// return karne se pehle store
		return arr[amount]=0;
	}
	// calculate karne se pehle check lready calculated tou nahi hai
	if(arr[amount]!=-1){
		return arr[amount];
	}
	// recursive case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){//-3
		int chotaamount=amount-coins[i];//4
		int chotans=mincoinsneededtomaketheamounttopdown(coins,n,chotaamount,arr);//5
		if(chotans!=INT_MAX&&chotans<ans){
			ans=chotans;//2


		}


	}


	}
	// return karne se pehle store
	return arr[amount]=ans+1;
	
}

// bottom up
int mincoinsneededtomaketheamountbottomup(int *coins,int n,int amount){
	int *arr=new int[amount+1];
	for(int i=0;i<=amount;i++){
		arr[i]=INT_MAX;
	}
	arr[0]=0;
	for(int rup=1;rup<=amount;rup++){
		for(int i=0;i<n;i++){
		if(rup-coins[i]>=0){
			int chotaamount=rup-coins[i];//0
			arr[rup]=min(arr[rup],arr[chotaamount]+1);
		}

	}


	}

	for(int i=0;i<=amount;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return arr[amount];
	

}
int main(){
	int coins[]={1,7,10};
	int n=sizeof(coins)/sizeof(int);//3



	int amount;
	cin>>amount;//15

	cout<<"simple recursion : "<<mincoinsneededtomaketheamount(coins,n,amount)<<endl;
	// int arr[100];
	int *arr=new int[amount+1];
	for(int i=0;i<=amount;i++){
		arr[i]=-1;
	}


	cout<<"Top Down : "<<mincoinsneededtomaketheamounttopdown(coins,n,amount,arr)<<endl;

	for(int i=0;i<=amount;i++){
		cout<<arr[i]<<" ";

	}
	cout<<endl;


	cout<<"Bottom Down : "<<mincoinsneededtomaketheamountbottomup(coins,n,amount)<<endl;



	return 0;
}