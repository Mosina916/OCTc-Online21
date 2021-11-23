#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5

	int row=1;
	while(row<=n){



		// ==============================================================================
	//row-->3

	// 1 kaam -->spaces print
	int couspaces=1;//

// loop
	while(couspaces<=n-row){//1<=2
	cout<<" "<<'\t';
	couspaces=couspaces+1;//2

}


// increasing order
	int stin=row;//3
	int couinc=1;//iska mtlb hoga pehla no increasing mai print hona hai
	while(couinc<=row){//4<=3
		cout<<stin<<'\t';//wo no print karaya
		couinc=couinc+1;//4
		stin=stin+1;//6

	}

	// dec order

	int coundec=1;
	int stde=2*row-2;//6-2-->4
	while(coundec<=row-1){//3<=2
		// print no
		cout<<stde<<'\t';

		coundec=coundec+1;//3
		stde=stde-1;//2

	}


	cout<<endl;
	row=row+1;



	// ==============================================================================










	}












	return 0;
}