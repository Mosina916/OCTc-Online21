#include<iostream>
using namespace std;
int main(){
	char ch='A';
	char *ptr=&ch;
	cout<<ptr<<endl;
	cout<<&ch<<endl;
	char ch1='A';
	char *ptr1=&ch1;
	cout<<ptr1<<endl;
	cout<<&ch1<<endl;


	char ch2='A';
	char *ptr2=&ch2;
	cout<<ptr2<<endl;
	cout<<&ch2<<endl;



	return 0;
}