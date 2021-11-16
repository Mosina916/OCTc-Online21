#include<iostream>
using namespace std;
int main(){
	// assume all the 3 numbers are diffrent 

	float a,b,c;
	cin>>a>>b>>c;// 2 2.9  3 

	if(a>b and a>c){
		cout<<a<<" is the largest"<<endl;

	}
	else if(b>a and b>c){
		cout<<b<<" is the largest"<<endl;

	}
	else{
		cout<<c<<" is the largest"<<endl;

	}



	return 0;
}