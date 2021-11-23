#include<iostream>
using namespace std;
int main(){
	int n,sp,N;
	cin>>n;//5

	// row=3;
	// 1 row kaam karugi
	int row=1;

	// loop
	while(row<=n){//outer while loop 1<=5

		// check karugi kya row even hai ya odd

		if(row%2==0){
			// even row hoga
			sp=0;
		}
		else{
			// row odd;
			sp=1;
		}


			// ===============================================================
	int counter=1;//koansa wala start print kar raha hun
// loop
	while(counter<=row){//3<=2//inner while loop 
		cout<<sp<<' ';
		counter=counter+1;//3
		if(sp==0){
			sp=1;
		}
		else{
			sp=0;

		}
		// sp=1-sp;//1-0=1-->1-1-->0



	}
	cout<<endl;
	row=row+1;

	// ===============================================================


	}////outer while loop


	





	


	



	return 0;
}