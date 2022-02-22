#include <iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;

	// constructor
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}


};

// class continue
// 
void printlevelwise(node*root){
	// take a queue of type node*
	queue<node*>q;
	// push root node
	q.push(root);
	// push NULL
	q.push(NULL);
	// loop
	while(!q.empty()){
		node*x=q.front();//NULL
	q.pop();
	// if(x is NULL)
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);

		}
	}
	// if x is not NULL
	else{
		cout<<x->data<<" "; //8
		if(x->left!=NULL){
			// left child exist karta hai
			q.push(x->left);
		}
		if(x->right!=NULL){
			// left child exist karta hai
			q.push(x->right);
		}


	}

	}

}


node* buildtreelevelwise(){
	node*root=NULL;
	int data;
	cin>>data;//-1
	if(data==-1){
		return NULL;
	}


	root=new node(data);
	queue<node*>q;
	q.push(root);

// loop
	while(!q.empty()){
		node*x=q.front();//13
		q.pop();
		cout<<"enter childrent of "<<x->data<<endl;
		int lc,rc;
		cin>>lc>>rc;//-1 -1 
		if(lc!=-1){
			x->left=new node(lc);
			q.push(x->left);


		}
		if(rc!=-1){
			x->right=new node(rc);
			q.push(x->right);


		}



	}
	return root;

}


void mirrorofAbinarytree(node*root){
	// base case
	if(root==NULL){
		return;
	}



	// /recursive case
	swap(root->left,root->right);
	mirrorofAbinarytree(root->left);
	mirrorofAbinarytree(root->right);

}




int main(){

	// node x;

	// node*root=buildtree();

	node*root=buildtreelevelwise();

	printlevelwise(root);

	mirrorofAbinarytree(root);
	printlevelwise(root);

	delete root;
	root=NULL;

	return 0;
}