#include<iostream>
using namespace std;
int fact(int n);//forward decleration
int main(){
	int n;
	cin>>n;//4

	cout<<"factorial is : "<<fact(n)<<endl;
	// int ans=1;
	// for(int i=2;i<=n;i++){
	// 	ans=ans*i;//2*3-->6*4-->14

	// }

	// cout<<ans<<endl;

	


	return 0;
}


int fact(int n){
 	int ans=1;
	for(int i=2;i<=n;i++){
		ans=ans*i;//2*3-->6*4-->14

	}

	// cout<<ans<<endl;


	return ans;

 }