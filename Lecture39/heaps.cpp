#include<iostream>
#include<vector>
using namespace std;
class Minheap{
public:
	vector<int> v;
	Minheap(){
		v.push_back(-1);
	}

	// push
	void push(int d){//1
		v.push_back(d);
		int c=v.size()-1;//7
		int p=c/2;//10/2-->3

// loop
		while(c>1&&v[c]<v[p]){
			swap(v[c],v[p]);
			c=p;//1
			p=c/2;//1/2-->0

		}
		

	}

	// Heapify
	void heapify(int indx){
		int p=indx;//5
		int minindex=indx;//5
		int lc=2*p;//10
		int rc=lc+1;//11
		if(lc<v.size()&&v[minindex]>v[lc]){//19>17
			minindex=lc;//4



		}
		if(rc<v.size()&v[minindex]>v[rc]){//17>2
			minindex=rc;//2

		}

		if(minindex!=p){
			swap(v[minindex],v[p]);
			heapify(minindex);//5

		}
		

	}

	//pop
	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}


	// top

	int top(){
		return v[1];
	}

	// empty
	bool empty(){
		return v.size()==1;
	}



};
int main(){
	Minheap h;
	h.push(1);
	h.push(3);
	h.push(10);
	h.push(13);
	h.push(6);
	h.push(30);
	h.push(0);
	h.push(7);
// heap sort
	while(!h.empty()){
		cout<<h.top()<<" ";//0 1 3 6 7 13 30 80 
		h.pop();
	}





	return 0;
}