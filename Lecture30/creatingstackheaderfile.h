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
