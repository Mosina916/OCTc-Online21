#include<iostream>
using namespace std;
int main(){
	char ch='Y';
	// cin>>ch;//'R'-->82 e-->101  '7'-->55

	// if(ch>='A'&&ch<='Z'){//implicit type casting
	// 	// if(82>=65&&82<=90){
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>='a'&&ch<='z'){
	// 	// else if(101>=97&&101<=122){

	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"Invalid character"<<endl;
	// }


	// // 2nd way

	// if(ch>=65&&ch<=90){//implicit type casting
	// 	// if(82>=65&&82<=90){
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>=97&&ch<=122){
	// 	// else if(101>=97&&101<=122){

	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"Invalid character"<<endl;
	// }

	// 3rd

	// if(isupper(ch)){
	// 	cout<<"UPPERCASE"<<endl;

	// }
	// else if(islower(ch)){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"Invalid character"<<endl;
	// }


	if(ch>='A'&&ch<='Z'){//implicit type casting
		// if(82>=65&&82<=90){
		cout<<"UPPERCASE"<<endl;
	}
	else if(ch>='a'&&ch<='z'){
		// else if(101>=97&&101<=122){

		cout<<"lowercase"<<endl;

	}
	else if(ch>='0'&&ch<='9'){
			// else if(ch>=48&&ch<=57){
		// else if(55>=48&&ch<=57){
		cout<<"integer"<<endl;

	}
	else{
		cout<<"Invalid character"<<endl;
	}




	return 0;
}