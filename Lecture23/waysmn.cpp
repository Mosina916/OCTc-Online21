#include<iostream>
using namespace std;
int ways(int i,int j){//
	// // // base case
	// if(i==0&&j==0){
	// 	return 1;
	// }
	// if(i<0){
	// 	return 0;
	// }
	if(i==0){
		return 1;
	}


	// if(j<0){
	// 	return 0;
	// }

	if(j==0){
		return 1;
	}


	// recursive case
	return ways(i,j-1)+ways(i-1,j);//2+


}
int main(){
	int n,m;
	cin>>n>>m;//3 3

	cout<<ways(n,m)<<endl;





	return 0;
}