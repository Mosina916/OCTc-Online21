#include<iostream>
using namespace std;
// dec seq mai numbers print krne hai

void decseq(int n){//0
	// base case
	if(n==0){
		return;//terminate
	}


	// recursive case
	cout<<n<<" ";//5
	decseq(n-1);

}

// h/w iska call stack banana hai

void incseq(int n){//4
	// base case
	if(n==0){
		return;//terminate
	}


	// recursive case
	incseq(n-1);
	cout<<n<<" ";//4
	
	
}
int main(){
	int n;
	cin>>n;
	decseq(n);

	cout<<endl;
	incseq(n);



	return 0;
}