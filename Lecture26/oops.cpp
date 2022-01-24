#include<iostream>
#include<cstring>
using namespace std;

// class train{
// public:
// 	int dibbe;
// 	int tyre;
// 	int tt;

// };
class car{
public:
	string name;
	int seats;
	int price;
	float modelno;


	// syntax default  constructor

	// car(){
	
	// }

	// default constutor override 
	car(){
		cout<<"default constructor called"<<endl;

	}

	// parametrized constructor

	car(string n,int s,int p,float mn){
		name=n;
		seats=s;
		price=p;
		modelno=mn;

	}


	// car(string n,int s){
	// 		name=n;
	// 	seats=s;
		
	// }

void print(){
	cout<<"name is "<<name<<endl;
	cout<<"seats are "<<seats<<endl;
	cout<<"price is "<<price<<endl;
	cout<<"modelno is "<<modelno<<endl;

	cout<<endl;




}

};
int main(){
	// train T;

	// int x;
	car A;
	A.name="BMW";
	A.seats=5;
	A.price=5000;
	A.modelno=20.56;

	A.print();


	// cout<<"name is "<<A.name<<endl;
	// cout<<"seats are "<<A.seats<<endl;
	// cout<<"price is "<<A.price<<endl;
	// cout<<"modelno is "<<A.modelno<<endl;


	car B;
	B.name="Audi";
	B.seats=6;
	B.price=3000;
	B.modelno=30.56;


	// cout<<"name is "<<B.name<<endl;
	// cout<<"seats are "<<B.seats<<endl;
	// cout<<"price is "<<B.price<<endl;
	// cout<<"modelno is "<<B.modelno<<endl;

	B.print();


	car C("XYZ",3,600,10.34);
	// car C("XYZ",3);



	// cout<<"name is "<<C.name<<endl;
	// cout<<"seats are "<<C.seats<<endl;
	// cout<<"price is "<<C.price<<endl;
	// cout<<"modelno is "<<C.modelno<<endl;


	C.print();

	car D("XhdYZ",3,600,10.34);
	D.print();





	return 0;
}