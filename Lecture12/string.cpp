#include<iostream>
using namespace std;

int main(){
	// char arr[100]="coding blocks";

	// string s;
	// cin>>s;//ignore spaces

	// char arr[100];
	// cin.getline(arr,100);

	// getline(cin,name of string);
	// getline(cin,s);

	// cout<<s<<endl;


	// // 2nd way

	// string s2="hello world";
	// cout<<s2<<endl;

	// // 3rd way
	// // '6'-->6
	// string s3("codgreh6475734ing blocks");
	// cout<<s3<<endl;

	// // char arrays use
	// char arr[100]="hello";
	// cout<<arr<<endl;


	// string s3="abc";
	// string s4="defg";

	// concatenation

	// string s5=s3+s4;//"abc"+"defg"-->"abcdefg"

	// s3=s3+s4;//"abcdefg"

	// s3=s4+s3;//"defgabc"

	// // cout<<s5<<endl;
	// cout<<s3<<endl;
	// cout<<s4<<endl;


	// comapre two strings
	// string s7="abbp";

	// string s7;
	// string s8;
	// getline(cin,s7);
	// getline(cin,s8);

	// // string s8="abca";
	// if(s7>s8){
	// 	cout<<"s7 is greater"<<endl;
	// }
	// else{
	// 	cout<<"s8 is greater"<<endl;

	// }

	// string s9;
	// getline(cin,s9);//"elephant"
	// // stringname.substr(index);
	// // cout<<s9.substr(3)<<endl;
	// // stringname.substr(index,count of character);
	// cout<<s9.substr(4,3)<<endl;

	string s9;//s9 is object of type string
	getline(cin,s9);//hell
	s9.push_back('o');
	s9.push_back('w');
	s9.push_back('o');
	s9.push_back('r');


	s9.pop_back();
	s9.pop_back();


	cout<<s9<<endl;
























	return 0;
}