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


// print in a range k1 to k2
void printinarage(node*root,int k1,int k2){ //1 6
	// base case
	if(root==NULL){
		return;
	}

	// recursive case
	printinarage(root->left,k1,k2);//1 3 4 6
	// root ka data
	if(root->data>=k1&&root->data<=k2){
		cout<<root->data<<" ";
	}
	printinarage(root->right,k1,k2);
}


bool isbst(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case
	if(root==NULL){
		return true;
	}


	// recursive case
	if(root->data>=min&&root->data<=max&&isbst(root->left,min,root->data)&&isbst(root->right,root->data,max)){
		return true;
	}
	return false;
}

node*buildtree(){
	int data;
	cin>>data;//8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
	if(data==-1){
		return NULL;

	}
	else{

		node*root=new node(data);
		root->left=buildtree();//lst
		root->right=buildtree();//rst

	return root;


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

class Pair{
public:
	int height;
	bool isbalanced;
	Pair(){
		height=0;
		isbalanced=true;
	}
};

Pair isheightbalanedornot(node*root){
	Pair p;
	// base case
	if(root==NULL){
		// p.height=0;
		// p.isbalanced=true;
		return p;
	}




	// recursive case
	Pair l=isheightbalanedornot(root->left);
	Pair r=isheightbalanedornot(root->right);
	p.height=max(l.height,r.height)+1;
	if(l.isbalanced==true&&r.isbalanced==true&&abs(l.height-r.height)<=1){
		p.isbalanced=true;
	}
	else{
		p.isbalanced=false;

	}

	return p;
	


}
// 8 3 10 1 6 14 4 7 13 -1

int main(){

	// node x;

	node*root=buildbst();
	// node*root=buildtree();
	// node*root=buildtreelevelwise();

	printlevelwise(root);
	 // printinarage(root,6,13);
	 if(isbst(root)){
	 	cout<<"true"<<endl;
	 }
	 else{
	 	cout<<"false"<<endl;
	 }

	 Pair X=isheightbalanedornot(root);
	 if(X.isbalanced==true){
	 	cout<<"height balanced tree"<<endl;
	 }
	 else{
	 	cout<<"Not height balanced tree"<<endl;

	 }


	delete root;
	root=NULL;

	return 0;
}