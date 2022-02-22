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

// preorder print
// root lst rst

void preorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	cout<<root->data<<" "; //4
	preorderprint(root->left);//lst
	preorderprint(root->right);//rst
}


void Inorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	Inorderprint(root->left);//lst
	cout<<root->data<<" "; //4
	
	Inorderprint(root->right);//rst
}

void postorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	postorderprint(root->left);//lst
	postorderprint(root->right);//rst
	cout<<root->data<<" "; //4
	
	
}

int countnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// recursive case
	return countnodes(root->left)+countnodes(root->right)+1;
}


int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// recursive case
	int lsth=height(root->left);//1
	int rsth=height(root->right); //3
	return max(lsth,rsth)+1;
}

int sumofnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}



	// recursiev case
	int lstsum=sumofnodes(root->left);
	int rstsum=sumofnodes(root->right);
	return lstsum+rstsum+root->data;

}

int diameter(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// recursive case
	// case when diameter is passing through lst
	int op1=diameter(root->left);//3 //
	// case when diameter is passing through rst
	int op2=diameter(root->right);//2
	// case when diameter is passing through root
	int op3=height(root->left)+height(root->right);//6
	return max(op1,max(op2,op3));//6
}
// i/p 8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
// o(n)-->diameter calculate
class Pair{
public:
	int dia;
	int height;

};
Pair fastdiameter(node*root){
	Pair p;
	// base case
	if(root==NULL){
		p.height=0;
		p.dia=0;
		return p;

	}


	// recursive case
	Pair l=fastdiameter(root->left);//
	Pair r=fastdiameter(root->right);//
	p.height=max(l.height,r.height)+1;


	int op1=l.dia; //3
	int op2=r.dia; //2
	int op3=l.height+r.height;
	p.dia=max(op1,max(op2,op3));

	return p;


}
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




int main(){

	// node x;

	node*root=buildtree();


	preorderprint(root);

	cout<<endl;
	Inorderprint(root);

	// node*root=buildtreelevelwise();

	// printlevelwise(root);

	delete root;
	root=NULL;

	return 0;
}