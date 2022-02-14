#include <iostream>
#include<stack>
using namespace std;
class node{
public:
	int data;
	node*next;
	// constructor
	node(int d){
		data=d;
		next=NULL;
	}
};
class Queue{

	node*head;
	node*tail;
	int len;
public:
	Queue(){
		head=NULL;
		tail=NULL;
		len=0;
	}


	// push
	void push(int data){
		node*n=new node(data);
		if(head==NULL){
			head=n;
			tail=n;
		}
		else{
			tail->next=n;
			tail=n;
		}
		len++;

	}


	// pop
	void pop(){
		// if queue is empty
		if(head==NULL){
			return;
		}
		// if only 1 ele is there
		else if (head->next==NULL)
		{
			delete head;
			head=NULL;
			tail=NULL;
		}
		else{
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
		}
		len--;
	}
	// empty()
	bool empty(){
		if(head==NULL){
			return true;
		}
		return false;

	}
	// front
	int front(){
		return head->data;
	}
	// size
	int size(){
		return len;
	}
};
int main(){
	Queue q;
	q.push(4);
	q.push(1);
	q.push(6);
	q.push(5);


	while(!q.empty()){
		cout<<q.front()<<" ";//4 1 6 5
		q.pop();

	}

	cout<<endl;



	

	return 0;
}