#include<iostream>
using namespace std;
class node{
	
	
public:
	node*next;
	int data;
	
	// constructor
	// node(int data){
	node(int d){
		data=d;
		next=NULL;

	}
};
class stack{
	node*head;
	int len;

	
public:
	stack(){
		head=NULL;
		len=0;
	}
	
	// top

	int top(){
		return head->data;
	}
	

	// push
	void push(int data){
		// int a;
		// int*a=new int
		// node n
		node*n=new node(data);
		n->next=head;
		head=n;
		len++;
	}
	// pop

	void pop(){
		// if ll does not exist

		if(head==NULL){
			return;
		}
		// single node
		else if(head->next==NULL){
			delete head;
			head=NULL;
		}
		// many nodes
		else{
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
		}
		len--;
	}
	// size
	int size(){
		return len;
	}


	// empty
	bool empty(){
		if(head==NULL){
			return true;
		}
		return false;
	}
	

};
