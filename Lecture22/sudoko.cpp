#include<iostream>
using namespace std;

bool kyamainumdaalsaktihun(int mat[9][9],int i,int j,int num,int n){
	// row
	for(int k=0;k<n;k++){
		if(mat[i][k]==num){
			return false;
		}
	}


	// col
	for(int k=0;k<n;k++){
		if(mat[k][j]==num){
			return false;
		}
	}

	// root(n)*root(n)
	int p=sqrt(n);
	int si=(i/p)*p;//3
	int sj=(j/p)*p;//3

	for(int u=si;u<si+p;u++){//6
	for(int o=sj;o<sj+p;o++){//6
		if(mat[u][o]==num){
			return false;
		}

	}
}
	
	return true;





}
bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	// if(j==n&&i==n-1){
	// 	for(int l=0;l<n;l++){
	// 		for(int k=0;k<n;k++){
	// 			cout<<mat[l][k]<<" ";
	// 		}
	// 		cout<<endl;
	// 	}
	// 	return true;


	// }
	if(i==n){
		for(int l=0;l<n;l++){
			for(int k=0;k<n;k++){
				cout<<mat[l][k]<<" ";
			}
			cout<<endl;
		}


		return true;
	}



	// recursive case
	if(j==n){
		return sudukosolver(mat,i+1,0,n);
		// i=i+1;//1
		// j=0;//
	}
	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}

	
	
		// loop
	for(int num=1;num<=9;num++){//5
		if(kyamainumdaalsaktihun(mat,i,j,num,n)==true){
			mat[i][j]=num;//5
			if(sudukosolver(mat,i,j+1,n)==true){
				return true;

			}
			mat[i][j]=0;


	}

	}
	return false;


	

}
int main(){
	int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

		sudukosolver(mat,0,0,9);


}