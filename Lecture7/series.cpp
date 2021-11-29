#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int count=0;
	int n=1;

// loop
	while(count<n1){
		int term=3*n+2;//8

	if(term%n2==0){
		// wo multiple hai
		n++;


	}
	else{
		// multiple nahi hai

		cout<<term<<endl;//5   11
		count++;//10
		n++;


	}


	}

	return 0;
}