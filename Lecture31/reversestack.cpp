#include <iostream>
#include<stack>
using namespace std;

void insertatbootom(stack<int>&s,int te){

	// base case
	if(s.empty()){
		s.push(te);//1 2 3 4
		return;
	}

	// recursive case
	int topofstack=s.top();//4 
	s.pop();
	insertatbootom(s,te);
	s.push(topofstack);


}
void reverseastack(stack<int> &s){

	// base case
	if(s.empty()){
		return;
	}
	// recursive case
	int topele=s.top();//1
	s.pop();
	reverseastack(s);
	insertatbootom(s,topele);


}

void printstack(stack<int> s){ //4 3 2 1
	while(!s.empty()){
			cout<<s.top()<<endl;
		s.pop();

	}

}
int main(){
	stack<int> s;
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);

	reverseastack(s);

	printstack(s);
	// stack empty huvi hogi
	printstack(s);



	return 0;
}