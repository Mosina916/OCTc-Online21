#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//3

	int i=1;//initilizition
// loop
	while(i<=n){//condition check
		cout<<i<<" ";//1 2 3//task
		i=i+1;//updation 

	}

	// i-->4


	for(int i=1,j=1;j<=n&&i<=n;i=i+1,j=j+1){
		cout<<i<<endl;//task
		cout<<j<<endl;


	}
	




	return 0;
}