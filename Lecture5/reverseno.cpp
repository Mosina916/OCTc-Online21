#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//563

	// int reverseno=0;

	// while(n>0){//condition check
	// 	int rem=n%10;//563%10-->3//56%10-->6 //5%10--?5 

	// reverseno=reverseno*10+rem;//0*10+3-->3//3*10+6//36*10+5-->365
	// n=n/10;//563/10-->56/10-->5/10-->0 //updation



	// }


	// cout<<reverseno<<endl;

	int reverseno=0;

	for(;n>0;n=n/10){


		int rem=n%10;//563%10-->3//56%10-->6 //5%10--?5 

	reverseno=reverseno*10+rem;//0*10+3-->3//3*10+6//36*10+5-->365

	}


	cout<<reverseno<<endl;
	










	return 0;
}