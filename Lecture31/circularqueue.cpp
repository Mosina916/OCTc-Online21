#include <iostream>
#include<stack>
using namespace std;

class Queue{
	int *arr;
	int f;
	int e;
	int cs;
	int n;

public:
	Queue(int s=5){
		n=s;
		arr=new int[n];
		f=0;
		e=n-1;
		cs=0;

	}
	

	// push
	void push(int data){
		if(cs<n){
			e=(e+1)%n;//1%5-->1
			arr[e]=data; //4 1
			cs++;//2

		}
		else{
			cout<<"queue is full "<<endl;
		}
		

	}
	
	// pop

	void pop(){
		if(cs>0){
			f=(f+1)%n;
			cs--;

		}
		else{
			cout<<"queue is empty"<<endl;
		}
	}

	// empty()
	bool empty(){
		if(cs==0){
			return true;
		}
		return false;
	}

	
	// front
	int front(){
		return arr[f];
	}
	
	// size
	int size(){
		return cs;
	}

	
};
int main(){
	Queue q;
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
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.push(4);
	q.push(1);
	q.push(6);
	// 4 1 6 
	// fifo

	
	while(!q.empty()){
		cout<<q.front()<<" ";//4 1 6 5
		q.pop();

	}

	cout<<endl;



	

	return 0;
}