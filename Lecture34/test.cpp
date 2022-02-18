#include <iostream>
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
int main(){

	// node x;

	node*root=buildtree();

	cout<<"preorderprint is : ";
	preorderprint(root);

	cout<<endl;

	cout<<"Inorderprint is : ";
	Inorderprint(root);

	cout<<endl;

	cout<<"postorderprint is : ";
	postorderprint(root);

	cout<<endl;


	cout<<"count of nodes is "<<countnodes(root)<<endl;

	cout<<"height of tree is "<<height(root)<<endl;

	cout<<"sum  of nodes of a tree is "<<sumofnodes(root)<<endl;

	cout<<"diameter of tree is "<<diameter(root)<<endl;



	delete root;
	root=NULL;

	return 0;
}