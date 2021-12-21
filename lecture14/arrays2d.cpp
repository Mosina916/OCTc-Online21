#include<iostream>
using namespace std;
int main(){
// 	// initilization
	// int arr[4][3]={
	// 	{4,9,13},
	// 	{1,2,3},
	// 	{19,30,60},
	// 	{10,11,12}
	// };

// 	// 0th row print karne ka kaam

// // print
	cout<<"array is "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;



// 	}


// 	cout<<endl;
	

	// // 1st row print karne ka kaam
	// for(int j=0;j<3;j++){
	// 	cout<<arr[1][j]<<" ";
	// }
	// cout<<endl;


// int arr[];//wrong
	// int arr1[3][3];//declare 

	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<3;j++){
	// 		cin>>arr1[i][j];

	// 	}

	// }


// print
	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<3;j++){
	// 	cout<<arr1[i][j]<<" ";
	// }
	// cout<<endl;



	// }

	// int arr[]={4,3,6,7};


// rows can be skiiped
	// int arr[][3]={
	// 	{4,9,13},
	// 	{1,2,3},
	// 	{19,30,60},
	// 	{10,11,12}
	// };

	 // print
// 	cout<<"array is "<<endl;
// 	for(int i=0;i<4;i++){
// 		for(int j=0;j<3;j++){
// 		cout<<arr[i][j]<<" ";
// 	}
// 	cout<<endl;
// }


	// cout<<arr[0]+1<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;


	// // int arr[2]={5,6}; 
	// cout<<arr<<endl;//internal pointer

// user input
	// n>10^6
	// int arr[n]
	// at max
	// int arr[10^6];
	// row>1000 cols>1000
	// int arr[rows][cols]
	// int arr[1000][1000];//10^6

	// int arr[100][100]={0};
	// int rows,cols;
	// cin>>rows>>cols;//3 3

	for(int r=0;r<rows;r++){
		for(int c=0;c<cols;c++){
			cin>>arr[r][c];

		}

	}

	// rows==3,cols=4

	for(int r=0;r<rows;r++){//1
		for(int c=0;c<4;c++){//1
			cout<<arr[r][c]<<" ";

		}
		cout<<endl;

	}


	// int arr[][5]={
	// 	{1,4},
	// 	{5,7}
		
	// };
	// for(int r=0;r<2;r++){
	// 	for(int c=0;c<5;c++){
	// 		cout<<arr[r][c]<<" ";

	// 	}
	// 	cout<<endl;

	// }














	return 0;
}