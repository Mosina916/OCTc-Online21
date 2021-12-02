#include<iostream>
using namespace std;
int main(){

	// int x=10;//4
	// float f=45.34;
	// double d=67.3452;

	// cout<<"value of x is "<<x<<endl;//bucket name -->value of  bucket
	// cout<<"value of f is "<<f<<endl;
	// cout<<"value of d is "<<d<<endl;


	// cout<<"value of sizeof(x) is "<<sizeof(x)<<endl;//4
	// cout<<"value of sizeof(f) is "<<sizeof(f)<<endl;//4
	// cout<<"value of sizeof(d) is "<<sizeof(d)<<endl;//8


	// cout<<"value of &x is "<<&x<<endl;//bucket name -->value of  bucket
	// cout<<"value of &f is "<<&f<<endl;
	// cout<<"value of &d is "<<&d<<endl;


	// cout<<"value of &x is "<<sizeof(&x)<<endl;
	// cout<<"value of &f is "<<sizeof(&f)<<endl;
	// cout<<"value of &d is "<<sizeof(&d)<<endl;


	// char ch='D';
	// cout<<"value of ch is "<<ch<<endl;//D
	// cout<<"value of sizeof(ch) is "<<sizeof(ch)<<endl;//1
	// // cout<<"value of &ch is "<<&ch<<endl;//address-->hexadecimal
	// // cout<<"value of &ch is "<<(int*)&ch<<endl;//address-->hexadecimal 
	// cout<<"value of &ch is "<<(float*)&ch<<endl;
	// // cout<<"value of &ch is "<<(double*)&ch<<endl;
	// // cout<<"value of &ch is "<<(void*)&ch<<endl;

	// cout<<"sizeof  &ch is "<<sizeof(&ch)<<endl;


	// char ch1='G';
	// cout<<"value of ch1 is "<<ch1<<endl;//G
	// cout<<"value of sizeof(ch1) is "<<sizeof(ch1)<<endl;//1
	// cout<<"value of &ch1 is "<<(int*)&ch1<<endl;//__>address  //GD-->D is garbage
	// cout<<"sizeof  &ch1 is "<<sizeof(&ch1)<<endl;


	// fool of compiler


	// int marks=70;

	// // to store address pointers

	// // sytax
	// // datatype* name
	// // datatype *name
	// int* mptr=&marks;//jahan pointer create kiya wahi value b daal di-->initilization

	// int* mptr;//decleartion
	// mptr=&marks;//assignment

	// mptr is same as &marks


	// cout<<mptr<<" "<<&marks<<endl;

// datatype* name
	// int** dmptr=&mptr;//double pointer


	// int***tmptr=&dmptr;
// derence operator

	// *mptr-->*address-->bucket


	// cout<<*mptr<<endl;
	// cout<<*(&marks)<<endl;



	// int y=50;
	// int *yptr=&y;


	// cout<<yptr<<endl;
	// cout<<yptr+1<<endl;
	// cout<<yptr+2<<endl;
	// cout<<yptr+3<<endl;


	double d=50;
	double *dptr=&d;


	cout<<dptr<<endl;
	cout<<dptr+1<<endl;


	int i=90,t=50;

	int *ptr1=&i,*ptr2=&t;
	



	return 0;
}