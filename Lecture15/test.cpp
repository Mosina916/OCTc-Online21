#include<iostream>
using namespace std;
void spiralprint(int arr[1000][1000],int r,int c){
	int sr=0,er=r-1;
	int sc=0,ec=c-1;



// prints ist row 
	while(sr<=er&&sc<=ec){
		for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";
	}
	sr++;

	// last col
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;

	// last row
	for(int k=ec;k>=sc;k--){
		cout<<arr[er][k]<<" ";

	}
	er--;
	// ist col
	for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<" ";
	}
	sc++;


	}
	






}
int main(){
	int arr[1000][1000];

	int r,c;
	cin>>r>>c;//4 4
// taking input of 2d matrix
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}


	spiralprint(arr,r,c);
	cout<<endl;



	return 0;

}