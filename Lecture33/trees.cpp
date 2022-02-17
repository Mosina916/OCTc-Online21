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
int main(){

	// node x;

	node*root=buildtree();



	delete root;
	root=NULL;

	return 0;
}