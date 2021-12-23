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
	for(int r=0;r<rows;r++){
		for(int c=0;c<cols;c++){// r-->3, c-->3
			if(r<c){
				swap(arr[r][c],arr[c][r]);
			}
		

		}

	}

	swap(rows,cols);





	for(int r=0;r<rows;r++){
		for(int c=0;c<cols;c++){
			cout<<arr[r][c]<<" ";

		}
		cout<<endl;

	}
	cout<<endl;






	


	return 0;
}