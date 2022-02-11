#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int>l;
	l.push_back(2);
	l.push_back(4);
	l.push_front(14);
	l.push_front(54);
	l.push_front(19);
	l.push_back(47);
	// 54 14 2 4 
	l.pop_back();
	l.pop_front();


	cout<<l.front()<<endl;
	cout<<l.back()<<endl;

	// cout<<*l.begin()<<endl;//l.begin() address of first node-->on deferring it gives value of first node

	// PRINT
		list<int>::iterator itt;
		for(itt=l.begin();itt!=l.end();itt++){
			cout<<*itt<<"-->";

		}
		cout<<endl;











	return 0;
}