#include<iostream>
#include"creatingstackheaderfile.h"
using namespace std;
int main(){


	// stack s;
	stack<int>s;
	s.push(7);
	s.push(4);
	s.push(6);
	s.push(5);
	// 2 4 6 5
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();

	}
	






	return 0;
}