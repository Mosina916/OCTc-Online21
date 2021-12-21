#include<iostream>
using namespace std;
int main(){

	int arr[1000][1000];//10^6
	int rows,cols;
	cin>>rows>>cols;//3 3

	for(int r=0;r<rows;r++){
		for(int c=0;c<cols;c++){
			cin>>arr[r][c];

		}

	}


	for(int c=0;c<cols;c++){//1
		if(c%2==0){
			// uska mtlb even col hai
			for(int r=0;r<rows;r++){
				cout<<arr[r][c]<<" ";

			}
		}
		else{
			// uska mtlb odd col hai
			for(int r=rows-1;r>=0;r--){
				cout<<arr[r][c]<<" ";

			}


		}
	}
	cout<<endl;


	


	return 0;
}