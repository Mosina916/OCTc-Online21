#include<iostream>
using namespace std;
int j=76;//global variable
int main(){
	int x=9;
	int y=70;
	int z=67;
	int u=345;
	const int r=90;
	const int c=32;
	int j=456;

// ================================ scope 2
	if(y>=80){
		// int z=47;
		int j=87;
		int u=34;
		cout<<"x : "<<x<<endl;//9
		cout<<"y : "<<y<<endl;//90
		cout<<"z : "<<z<<endl;//47 67
		cout<<"u : "<<u<<endl;//34
	}
	else{
		int y=657;
		// int y=90;
		const int r=89;
		// c=67;
		// int j=4;

		cout<<"x : "<<x<<endl;//9
		cout<<"y : "<<y<<endl;//657
		cout<<"z : "<<z<<endl;// 67
		cout<<"u : "<<u<<endl;//34
		cout<<"r : "<<r<<endl;//34
		// cout<<"j : "<<j<<endl;//456
		cout<<"j : "<<::j<<endl;////global j 76 

	}
	// ================================ scope 2




		cout<<"x : "<<x<<endl;//9
		cout<<"y : "<<y<<endl;//90
		cout<<"z : "<<z<<endl;//67
		cout<<"r : "<<r<<endl;

		// cout<<"j : "<<j<<endl;//456
				cout<<"j : "<<::j<<endl;//76



	return 0;
}