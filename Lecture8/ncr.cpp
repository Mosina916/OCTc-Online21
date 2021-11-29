#include<iostream>
using namespace std;
int fact(int n){
 	int ans=1;
	for(int i=2;i<=n;i++){
		ans=ans*i;//2*3-->6*4-->14

	}
	// cout<<ans<<endl;
	return ans;

 }

 int ncr(int n,int r){
 	// ncr=n!/(r!*(n-r)!)
 	int ans=fact(n)/(fact(r)*fact(n-r));
 	return ans;

 }
int main(){//start
	int n,r;
	cin>>n>>r;//2 4
	if(n>=r){
			cout<<"ncr is : "<<ncr(n,r)<<endl;

	}
	else{
		cout<<"invalid";

	}
	return 0;
}