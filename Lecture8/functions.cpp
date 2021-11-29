#include<iostream>
using namespace std;

// organized,reuse,readibilty
// returntype  functionname(){
// task

// }
// no return no arguments 
void sumoftwonum(){//function declare
	// function definition
	int a=70,b=30;

	int sum=a+b;

	cout<<"sum is: "<<sum<<endl;

	// return sum;



}
// no return with arguments-->4
void subtract(int x,int u){
	int sub=x-u;
	cout<<"subtract : "<<sub<<endl;

}

// return no arguments -->3
float multof3no(){
	int x=7,z=2;
	float y=3.7;

	float mul=x*y*z;

	return mul;

}
// no return no argument -->2
void statementprint(){
	cout<<"hello world"<<endl;
	cout<<"hii"<<endl;
	cout<<"humpty dumpty"<<endl;
	cout<<"coding blocks"<<endl;
}
// return with arguments -->1

float add3no(int x,float y,int z){
	float sum=x+y+z;//2,5.5,7-->14.5

	return sum;

}

// bool raincheck(){
// 	israinig=true;
// 	if(israinig==true){
// 		return true;
// 	}
// 	else{
// 		return false;
// 	}
// }


// function-->piece of code-->doing particular task 
int main(){//start of the program 

	// t1-->e1
	// functionname();
	sumoftwonum();//function calling /invoking-->access will go to line no 9


	


	// t2-->e2
	float x=multof3no();

	cout<<x<<endl;





	// t3-->e3
	// statementprint();

	// for(int i=1;i<=5;i++){
	// 	cout<<"hello world"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"humpty dumpty"<<endl;
	// cout<<"coding blocks"<<endl;

	// }



	// taks1
	// cout<<"ho"<<endl;
	// cout<<"hello world"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"humpty dumpty"<<endl;
	// cout<<"coding blocks"<<endl;

	cout<<"ho"<<endl;
	statementprint();


	// task 2
	// cout<<"pen"<<endl;
	// cout<<"hello world"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"humpty dumpty"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"table"<<endl;
	cout<<"pen"<<endl;
	statementprint();
	cout<<"table"<<endl;



	// task3
	// cout<<"iphone"<<endl;
	// cout<<"hello world"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"humpty dumpty"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"laptop"<<endl;

	cout<<"iphone"<<endl;
	statementprint();
	cout<<"laptop"<<endl;


	

	// cout<<"hello world"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"humpty dumpty"<<endl;
	// cout<<"coding blocks"<<endl;

	// cout<<"hello world"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"humpty dumpty"<<endl;
	// cout<<"coding blocks"<<endl;

	// cout<<"hello world"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"humpty dumpty"<<endl;
	// cout<<"coding blocks"<<endl;

	// cout<<"hello world"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"humpty dumpty"<<endl;
	// cout<<"coding blocks"<<endl;


	subtract(56,3);//parameters /arguments


	cout<<add3no(2,5.5,7)<<endl;







	return 0;
}