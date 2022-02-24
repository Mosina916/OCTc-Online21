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

node*insertinbst(int data,node*root){//14 NULL
	if(root==NULL){
		root=new node(data);
		return root;

	}
	if(data<=root->data){//5<=4
		root->left=insertinbst(data,root->left);//5 NULL
		return root;


	}
	else{
		root->right=insertinbst(data,root->right);//14
		return root;
	}

}
node* buildbst(){
	node*root=NULL;
	int data;
	cin>>data;//8
	// root=new node(data);

// loop
	while(data!=-1){
		root=insertinbst(data,root);//8 300
		cin>>data;//-1

	}
	return root;
	


	
}


bool searchinbst(node*root,int key){
	// base case
	if(root==NULL){
		return false;
	}

	// recursive case
	if(key==root->data){
		return true;
	}
	if(key<root->data){
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);
	}


}
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




int main(){

	// node x;

	node*root=buildbst();

	printlevelwise(root);
	if(searchinbst(root,70)){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;

	}


	delete root;
	root=NULL;

	return 0;
}