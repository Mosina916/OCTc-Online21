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
class Linkedlist{
public:
	node*head;
	node*tail;
	Linkedlist(){
		head=NULL;
		tail=NULL;
	}
};
Linkedlist bsttoll(node*root){
	Linkedlist l;
	// base case
	if(root==NULL){
		// l.head=NULL;
		// l.tail=NULL;
		return l;
	}



	// recursive case
	// case 1 is no child
	if(root->left==NULL&&root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;

	}
	// case 2 :lst exist
	else if(root->left!=NULL&&root->right==NULL){
		Linkedlist x=bsttoll(root->left);
		x.tail->right=root;
		l.head=x.head;
		l.tail=root;
		// return l;
	}

	// case 3 :rst exist
	else if(root->left==NULL&&root->right!=NULL){
		Linkedlist y=bsttoll(root->right);
		root->right=y.head;
		l.head=root;
		l.tail=y.tail;
		// return l;

	}
	// case 4
	// lst exist rst exist
	else{
		Linkedlist x=bsttoll(root->left);//4
		Linkedlist y=bsttoll(root->right);//7
		x.tail->right=root;
		root->right=y.head;
		l.head=x.head;
		l.tail=y.tail;
		// return l;

	}
	return l;


}

void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";//1 3
		head=head->right;
	}

	cout<<endl;
}

node* createbstusingsortedarray(int *arr,int s,int e){
	// base case
	if(s>e){
		return NULL;
	}


	// recursive case
	int mid=(s+e)/2;
	node *root=new node(arr[mid]);
	root->left=createbstusingsortedarray(arr,s,mid-1);
	root->right=createbstusingsortedarray(arr,mid+1,e);
	return root;

}


node* deleteinbst(node*root,int key){
	if(root==NULL){
		return NULL;
	}
	// key is smaller than root->data
	else if(key<root->data){
		root->left=deleteinbst(root->left,key);
		return root;

	}
	// key is greater than root->data
	else if(key>root->data){
		root->right=deleteinbst(root->right,key);
		return root;

	}
	else{
		// root->data==key
		// case 1 
		// no child exist
		if(root->left==NULL&&root->right==NULL){
			delete root;
			return NULL;
		}
		// case 2 1 part
		// single child exist only rc
		else if(root->right!=NULL&&root->left==NULL){
			node*temp=root->right;
			delete root;
			return temp;

		}
		// case 2 2 part
		// single child exist only lc
		else if(root->right==NULL&&root->left!=NULL){
			node*temp=root->left;
			delete root;
			return temp;

		}
		// case 3
		// rc lc exist
		else{
			// // replace min in rst
			// node*replace=root->right;
			// // loop
			// while(replace->left!=NULL){
			// 	replace=replace->left;

			// }
			// swap(root->data,replace->data);
			// root->right=deleteinbst(root->right,key);
			// return root;

			// replace max in lst
			node*replace=root->left;
			// loop
			while(replace->right!=NULL){
				replace=replace->right;

			}
			swap(root->data,replace->data);
			root->left=deleteinbst(root->left,key);
			return root;
			

		}

	}
}

void rightview(node*root,int level,int &mlttn){//2 1
	// base case 
	if(root==NULL){
		return;
	}


	// recursive case
	if(level>mlttn){//8>7
		cout<<root->data<<" ";//8 10 14 16 15 16 8 8
		mlttn=level;//8


	}
	

	rightview(root->right,level+1,mlttn);// 6 5
	rightview(root->left,level+1,mlttn);//

}


void leftview(node*root,int level,int &mlttn){//2 1
	// base case 
	if(root==NULL){
		return;
	}


	// recursive case
	if(level>mlttn){//8>7
		cout<<root->data<<" ";//8 10 14 16 15 16 8 8
		mlttn=level;//8


	}
	
	leftview(root->left,level+1,mlttn);//
	leftview(root->right,level+1,mlttn);// 6 5
	
}
int main(){
	int arr[]={1,2,3,4,5,8,9,10};
	int n=sizeof(arr)/sizeof(int);//8
	node*root=createbstusingsortedarray(arr,0,n-1);
	// node x;
	// node*root=buildbst();
	// // node*root=buildtree();
	// // node*root=buildtreelevelwise();
	cout<<"Before deleteing"<<endl;
	printlevelwise(root);
	// root=deleteinbst(root,4);
	// cout<<"after deleteing"<<endl;
	// printlevelwise(root);
	int x=0;
	// cout<<"right view : ";
	// rightview(root,1,x);
	// cout<<endl;
	cout<<"left view : ";
	leftview(root,1,x);
	cout<<endl;
	//  // printinarage(root,6,13);
	//  if(isbst(root)){
	//  	cout<<"true"<<endl;
	//  }
	//  else{
	//  	cout<<"false"<<endl;
	//  }

	//  Pair X=isheightbalanedornot(root);
	//  if(X.isbalanced==true){
	//  	cout<<"height balanced tree"<<endl;
	//  }
	//  else{
	//  	cout<<"Not height balanced tree"<<endl;

	//  }

	//  Linkedlist l= bsttoll(root);


	 // printll(l.head);


	delete root;
	root=NULL;

	return 0;
}