#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//9
	// int x=10;
	int i=2;

// loop
	while(i<n){
		if(n%i==0){//== compare lhs ko rhs k saath 
		// 2 5 ka factor hai
			cout<<"NOT prime"<<endl;
			return 0;
		// tou 2 5 ka factor hai
		}
		else{
		// cout<<"prime"<<endl;

		i=i+1;//5


		}
	
	}
	
	if(i==n){
		cout<<"prime"<<endl;

	}
	


	



	return 0;
}