#include<iostream>
using namespace std;
int stringtoint(string s,int l){
	// base case
	if(l==0){
		return 0;

	}


	// recursive case
	int digit=s[l-1]-'0';//'8'-'0'-->8
	return stringtoint(s,l-1)*10+digit;//"564"-->564*10+8-->5648

	



}
int main(){
	string s;
	cin>>s;//"5648"-->564*10+8-->5648
	// to find string length
	// cout<<s+100<<endl;

	int l=s.length();//4
	cout<<stringtoint(s,l)+100<<endl;





	return 0;
}