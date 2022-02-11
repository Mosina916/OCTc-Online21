#include<iostream>
#include<vector>
using namespace std;
class stack{
	vector<int>v;
	

public:
	
	// top
	int top(){
		return v[v.size()-1];

	}

	// push
	void push(int data){
		v.push_back(data);
	}


	// pop
	void pop(){
		v.pop_back();
	}


	// size
	int size(){
		return v.size();
	}

	// empty
	bool emepty(){
		if(v.size()==0){
			return true;
		}
		return false;
	}

};
int main(){


	stack s;

	s.push(2);
	s.push(4);
	s.push(6);
	s.push(5);
	// 2 4 6 5
	// cout<<s.v[1]<<endl;
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;






	return 0;
}