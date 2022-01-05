#include<iostream>
using namespace std;
int sol[100][100]={0};
int cou=0;
bool ratinamaze(char maze[20][20],int r,int c,int i,int j){
	// base case
	if(i==r-1&&j==c-1){
		sol[i][j]=1;
		// print sol matrix

		for(int l=0;l<r;l++){
			for(int k=0;k<c;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		// return true;
		cou++;

		cout<<endl;
		// all paths 
		sol[i][j]=0;

		return false;

	}



	// recursive case
	sol[i][j]=1;//0 0
	// right
	if(j+1<c&&maze[i][j+1]!='X'){
		// tou hi mai right jaa sakti hun
		bool kyarightseansmila=ratinamaze(maze,r,c,i,j+1);
		if(kyarightseansmila==true){
			return true;
		}



	}
	// down


	if(i+1<r&&maze[i+1][j]!='X'){

		bool kyadownseansmila=ratinamaze(maze,r,c,i+1,j);
		if(kyadownseansmila==true){
			return true;
		}

	}

	sol[i][j]=0;
	return false;



}
int main(){
	char maze[20][20]={
		"OOOO",
		"OOOX",
		"OOXO",
		"OOOO"

	};


	// char maze[20][20]={
	// 	"OOOO",
	// 	"OOOO",
	// 	"OOOO",
	// 	"OOOO"

	// };
		

	
	// memset(sol,0,sizeof(sol));
		// memset(sol,8,sizeof(sol));


	ratinamaze(maze,4,4,0,0);

	cout<<"total combination "<<cou<<endl;



	return 0;
}