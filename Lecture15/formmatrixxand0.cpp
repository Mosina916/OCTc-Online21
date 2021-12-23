#include<iostream>
using namespace std;
void formmatrixxand0(char arr[1000][1000],int r,int c){
	int sr=0,er=r-1;
	int sc=0,ec=c-1;


	char ch='X';

	while(sr<=er&&sc<=ec){

		// prints ist row 
		for(int i=sc;i<=ec;i++){
		arr[sr][i]=ch;
	}
	sr++;

	// last col
	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;
	}
	ec--;

	// last row
	for(int k=ec;k>=sc;k--){
		arr[er][k]=ch;

	}
	er--;
	// ist col
	for(int l=er;l>=sr;l--){
		arr[l][sc]=ch;
	}
	sc++;


	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';

	}


	}
	






}
int main(){
	char arr[1000][1000];

	int r,c;
	cin>>r>>c;//6 6 


	formmatrixxand0(arr,r,c);
	cout<<endl;

// print
	for(int i=0;i<r;i++){
		for (int j=0;j<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;

	}
	// cout<<endl;



	return 0;

}