#include<iostream>
#include<vector>
using namespace std;
// templates 
// program generlize
template<typename T>
class stack{
	vector<T>v;
	
	
public:
	
	// top
	T top(){
		return v[v.size()-1];

	}

	// push
	void push(T data){
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
	bool empty(){
		if(v.size()==0){
			return true;
		}
		return false;
	}

};
int main(){


	// stack s;
	stack<int>s;
	s.push(7);
	s.push(4);
	s.push(6);
	s.push(5);
	// 2 4 6 5
	// cout<<s.v[1]<<endl;
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;

	stack<char> s1;
	s1.push('D');
	






	return 0;
}