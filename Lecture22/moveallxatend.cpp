#include<iostream>
using namespace std;

string moveallxatend(string s){//"xabxxcx"// "xabcd"--abcd-->bcd-->cd-->d -->\0
	if(s.length()==0){
		return "";
	}
	char firstchar=s[0];//'x' 'a' 'b' 'c' 'd'
	// "bcdx"
	string chotistring=moveallxatend(s.substr(1)); //""
	if(firstchar=='x'){
		return chotistring+firstchar;//abcxxx+'x'-->abcxxxx
	}
	else{
		return firstchar+chotistring;

	}

}
int main(){
	string s;
	cin>>s;//"xabxxcx"-->abcxxxx
	cout<<moveallxatend(s)<<endl;



}