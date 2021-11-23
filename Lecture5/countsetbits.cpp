#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//5

	int count=0;
	while(n>0){//1>0
		if((n&1)>0){//101&1--?10&1 __>1&1
			count++;//2
		}
		n=n>>1;//101>>1-->10>>1-->1>>1-->0
	}


	cout<<count<<endl;



	// cout<<(3<<2)<<endl;


	

	return 0;
}