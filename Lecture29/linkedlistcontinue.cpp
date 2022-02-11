#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	// 
	node(int d){
		data=d;
		next=NULL;
	}



};

void insertatfront(node*&head,node*&tail,int data){
	node*n=new node(data);
	if(head==NULL){
		head=n;
		tail=n;
		return;
	}
	else{
		n->next=head;
		head=n;
	}
}

int lengthofll(node*head){
	node*temp=head;
	int co=0;

// loop
	while(temp!=NULL){
		co++;//6
	temp=temp->next;//1000

	}
	return co;
	

}



void printlinkedlist(node*head){
// 	node*temp=head;//900
// loop
// 	while(temp!=NULL){
// 		cout<<temp->data<<"-->";
// 	temp=temp->next;//1900


// 	}

	while(head!=NULL){
		cout<<head->data<<"-->";//20
	head=head->next;//1900


	}
	cout<<endl;
	
}


void deleteatfront(node*&head,node*&tail){
	// ll emepty
	if(head==NULL){
		return;
	}
	// single node
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	else{
		node*temp=head;
		head=head->next;
		delete temp;
	}

}


bool searchiter(node*head,int key){

// loop
	while(head!=NULL){
		if(head->data==key){
		return true;

	}
	head=head->next;

	}
	return false;
	

}

// int mid(node*head){
// 	node*slow=head;
// 	node*fast=head;
// // loop
// 	while(fast!=NULL&&fast->next!=NULL){
// 		slow=slow->next;
// 	fast=fast->next->next;

// 	}

// 	return slow->data;
	


// }

node* mid(node*head){
	node*slow=head;
	node*fast=head->next;
// loop
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;

	}

	return slow;
	


}

void reversell(node*&head){
	node*curr=head;
	node*prev=NULL;
	node*n;

// loop
	while(curr!=NULL){
		n=curr->next;
		curr->next=prev;
		prev=curr;
		curr=n;

	}
	head=prev;
	

}

node* kthnodefromend(node*head,int k){
// 0-->3-->4-->6-->8-->9-->
	if(head==NULL){
		return NULL;
	}
	node*temp=head;
	node*slow=head;
	for(int i=1;i<=k;i++){
		temp=temp->next;
	}

// loop
	while(temp!=NULL){
		slow=slow->next;
	temp=temp->next;

	}
	return slow;
	

}
node* mergetwosortedll(node*h1,node*h2){
	// base case
	// if(h1==NULL&&h2==NULL){
	// 	return NULL;
	// }

	// if(h1!=NULL&&h2==NULL){
	// 	// l2 doesn't exist
	// 	return h1;
	// }
	// if(h1==NULL&&h2!=NULL){
	// 	// l1 doesn't exist
	// 	return h2;
	// }

	if(h1==NULL){
		return h2;

	}
	if(h2==NULL){
		return h1;

	}

	// recursive 
	node* newhead;
	if(h1->data<h2->data){
		newhead=h1;
		newhead->next=mergetwosortedll(h1->next,h2);


	}
	else{
		newhead=h2;
		newhead->next=mergetwosortedll(h1,h2->next);


	}

	return newhead;

}

node* mergesort(node*head){
	if(head==NULL||head->next==NULL){
		return head;
	}
	node* m=mid(head);
	node*l1h=head;
	node*l2h=m->next;
	m->next=NULL;

	l1h=mergesort(l1h);
	l2h=mergesort(l2h);
	node*fans=mergetwosortedll(l1h,l2h);
	return fans;


}
bool iscyclic(node*head){
	node*slow=head;
	node*fast=head;

	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		return true;
	}

	}
	return false;
	
}

void createcycle(node*&head,node*&tail){
	tail->next=head->next->next;
}


void breakcycle(node*head){
	// step 1 -->is cycle present or not

	node*slow=head;
	node*fast=head;
	node*prev;

	while(fast!=NULL&&fast->next!=NULL){
		prev=slow;
		slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		break;
		
	}

	}
	// cycle mil gaya
	slow=head;

	while(slow!=fast){
		slow=slow->next;
	fast=fast->next;
	prev=prev->next;

	}

	prev->next=NULL;
	
	

}
int main(){

	node*h1=NULL;
	node*t1=NULL;
	// node*h2=NULL;
	// node*t2=NULL;
	// int n,m;//3 4
	// cin>>n>>m;
	int n;
	cin>>n;
	int data;

	for(int i=0;i<n;i++){
		
		cin>>data;
		insertatfront(h1,t1,data); //5 4 3 2 1

	}

	printlinkedlist(h1);
	

	if(iscyclic(h1)){
		cout<<"yes cyclic"<<endl;

	}
	else{
		cout<<"Not cyclic"<<endl;

	}


	createcycle(h1,t1);
	breakcycle(h1);

	printlinkedlist(h1);


	
		





	return 0;
}