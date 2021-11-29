#include<iostream>
using namespace std;
// void sum(int x,int y){
// 	cout<<x+y<<endl;
// }
// void sum(int x,int y,int z){
// 	cout<<x+y+z<<endl;
// }
// void sum(int x){
// 	cout<<x<<endl;
// }

// void sum(int x,int y,int z,int a){
// 	cout<<x+y+z+a<<endl;
// }


// default arguments
void sum(int x=0,int y=0,int z=0,int a=0,int b=0){

	cout<<x+y+z+a+b<<endl;

}

// function-->piece of code-->doing particular task 
int main(){//start of the program 
	sum(3);

	sum(34,56);

	sum(5,6,7);
	sum(15,6,7,8);

	// sum(2,4);







	return 0;
}