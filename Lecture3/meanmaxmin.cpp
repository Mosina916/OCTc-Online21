#include<iostream>
#include<climits>
using namespace std;
int main(){
	int N;
	cin>>N;//3
	int abhitakkasum=0;//intial sum =0;
	int abhitakkamaximum=INT_MIN;////-2^31
	int abhitakkaminimum=INT_MAX;//2^31-1



	//LOOP
	int co=1;
	while(co<=N){//4<=3


		int num;
	cin>>num;//9

	// mean
	abhitakkasum=abhitakkasum+num;//6+3=9+9=18


	// maximum
	if(num>abhitakkamaximum){//9>6
		abhitakkamaximum=num;
	}


	// minumum
	if(num<abhitakkaminimum){//9<3
		abhitakkaminimum=num;

	}


	co=co+1;//4


	}

	cout<<"maximum "<<abhitakkamaximum<<endl;
	cout<<"minimum "<<abhitakkaminimum<<endl;

	int mean=abhitakkasum/N;//18/3
	cout<<"mean "<<mean<<endl;




	



















	return 0;
}