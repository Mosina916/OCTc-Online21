#include<iostream>
using namespace std;
string arr[]={"zero","one","Two","Three","Four","Five","Six","seven","Eight","Nine"};
void conver2048towordsinrev(int n){//204 //20 2 0
	// base case
	if(n==0){
		return;
	}

	// recursive case
	int rem=n%10;//2048%10-->8 //204%10-->4 //20%10-->0 //2%10-->2
	cout<<arr[rem]<<" ";//Eight  Four Zero Two
	 // B
	conver2048towordsinrev(n/10);//2048/10-->204/10-->20/10-->2/10-->0



}


void conver2048towords(int n){//2048 //204 //20
	// base case
	if(n==0){
		return;
	}

	// recursive case
	conver2048towords(n/10);//2048/10-->204/10 -->20/10-->2/10-->0
	int rem=n%10;//2048%10-->8 
	cout<<arr[rem]<<" ";//Eight  Four Zero Two
	 // B


}
int main(){
	// n will be > than 0 always

	int n;
	cin>>n;//2048-->eight four zero two
	conver2048towordsinrev(n);//A

	cout<<endl;
	conver2048towords(n);//Two zero four eight
	cout<<endl;


	return 0;
}