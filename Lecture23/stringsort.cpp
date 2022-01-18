#include<iostream>
#include<algorithm>
using namespace std;


// fn(string *arr){
// 	string s1=arr[0];
// 	string s1=arr[1];


// }
// comparator
bool mycompare(string s1,string s2){//cat cattle //apple bat.  bat apple   s1-->batman s2-->bat.  car car
	// cout<<s1<<"  "<<s2<<endl;
	int l1=s1.length();//3
	int l2=s2.length();//6


	// if(l1<l2){
	// 	swap(s1,s2);

	// }
	// l1=s1.length();//3
	// l2=s2.length();//6

	if(s2.substr(0,l1)==s1&&l1<=l2){
		return false;

	}
	if(l2<=l1&&s1.substr(0,l2)==s2){
		return true;
	}
	else{
		// if(s1<s2){
		// 	return true; ////apple bat
		// }
		// else{
		// 	return false; //// bat apple

		// }

		return s1<s2;

	}



}

int main(){
	int n;
	cin>>n;
	cin.ignore();
	string arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i]; //apple bat

	}

	sort(arr,arr+n,mycompare);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;

	}









	return 0;
}