#include<iostream>
using namespace std;
int main(){


	int arr[100];
	int n;
	cin>>n;//4

// input

	for(int i=0;i<=n-1;i++){
		cin>>arr[i];

	}

	int key;
	cin>>key;//34
	int i;


	for(i=0;i<=n-1;i++){//4<=3
		if(arr[i]==key){

			cout<<i<<endl;//2
			break;

		}
	}


	if(i==n){
		cout<<"key not present"<<endl;
	}



	






	return 0;
}