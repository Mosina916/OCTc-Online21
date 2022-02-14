#include <iostream>
#include<queue>
using namespace std;
void printqueue(queue<int>q){
	while(!q.empty()){
		cout<<q.front()<<" ";//4 1 6 5
		q.pop();

	}
	cout<<endl;
}
int main(){
	queue<int>q;
	q.push(4); 
	q.push(1);
	q.push(6);
	q.push(5);
	q.push(15);
	// 
	q.pop();
	q.pop();
	q.pop();
	q.push(25);
	q.push(35);
	printqueue(q); //
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	printqueue(q);
	q.pop();
	q.push(4);
	printqueue(q);

	q.pop();
	cout<<"queue ka size "<<q.size()<<endl;

	q.push(1);
	q.push(6);
	// 4 1 6 
	// fifo
	cout<<"queue ka size "<<q.size()<<endl;

	printqueue(q);
	cout<<endl;



	

	return 0;
}