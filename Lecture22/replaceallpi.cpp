#include<iostream>
using namespace std;

string replaceallpi(string s){
	// base case
	// if(s.length()<=1){
	// 	char arr[]={s[0],'\0'};
	// 	return arr;
	// 	// return ""+s[0];
	// 	// return to_string(s[0]);
	// }

	if(s.length()==0){
		
		return "";
	
	}

	// recursive case
	string meraans=s.substr(0,2);//pehle 2 character
	if(meraans=="pi"){

		return "3.14"+replaceallpi(s.substr(2));
	}
	else{
		return s[0]+replaceallpi(s.substr(1));

	}
}
int main(){
	// char arr[]={'a','\0'}
	string s;
	cin>>s;//

	cout<<s.substr(0,3);//"c\0"



	// cout<<replaceallpi(s)<<endl;






}