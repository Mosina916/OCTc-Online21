#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5

	// row=3;
	// 1 row kaam karugi
	int row=1;
	int no=1;


	// loop
	while(row<=n){//outer while loop 2<=5


			// ===============================================================
	int counter=1;//koansa wala start print kar raha hun
// loop
	while(counter<=row){//3<=2 //inner while loop 
		cout<<no<<' ';
		no=no+1;//4
		counter=counter+1;//3


	}
	cout<<endl;
	row=row+1;

	// ===============================================================


	}////outer while loop


	





	


	



	return 0;
}