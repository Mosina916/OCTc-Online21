#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	// priority_queue<int> h;//max heap

	priority_queue<int,vector<int>,greater<int> > h;//min heap
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