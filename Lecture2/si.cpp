#include<iostream>
using namespace std;
int main(){
	int p,r,t;
	cin>>p>>r>>t;//1 10 1

	// int si=p*r*t/100.0;//1*10*1=10/100=0.1-->int/int-->int
	// float si=p*r*t/100.0;//change denomintor

	// float si=p*r*t*1.0/100;//change numerator
	float si=p*r*t/100;//change denomintor

	// int si=p*r*t/100.0;//0.1
	// int/float-->float//10/100-->0.1

	cout<<"Simple intrest is "<<si<<endl;





	// si=p*r*t/100; =10*20*10=2000/100=20;




	return 0;
}