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

	int key,r,c;
	cin>>key;//90


	for(r=0;r<rows;r++){

		// c wala loop 
		for(c=0;c<cols;c++){//3<3
			// loop k ander kab hoga jab c<cols
			if(arr[r][c]==key){//4==90
		cout<<"key is present at index "<<r<<" , "<<c<<endl;
		// return 0;
		break;

	}

	}

	if(c<cols){
		break;

	}
	// c<cols-->break;
	// c==cols

	// agar break ki help se bahar aaya uska mtlb c<cvols
	// ist way will be when c will be equal to col
// it will come here agar break laga 
	}


	if(rows==r){
		cout<<"key is not present"<<endl;

	}
	
	



	

















	return 0;
}