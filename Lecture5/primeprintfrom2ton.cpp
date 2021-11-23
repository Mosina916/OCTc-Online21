#include<iostream>
using namespace std;
int main(){

	int N;
	cin>>N;//7
	// int n;
	// cin>>n;//9
	// int x=10;

	int n=2;
	while(n<=N){//6<=7
		// ek no ko check karta hai prime hai ki nahi agar hai tou print karta hai nahi tou ignore karta hai
	// ==========================================================
	int i=2;

// loop
	while(i<n){//2<4
		if(n%i==0){//== compare lhs ko rhs k saath 
		// 2 5 ka factor hai
			// cout<<"NOT prime"<<endl;
			// return 0;
			break; //line no 35
		// tou 2 5 ka factor hai
		}
		else{
		// cout<<"prime"<<endl;

		i=i+1;//3


		}
	
	}
	

	
	if(i==n){//2==4
		cout<<n<<endl;//2 3 5 7
	}


	// ==========================================================
	n=n+1;//5





	}


	cout<<endl;

	
	


	



	return 0;
}