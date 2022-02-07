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
void insertattail(node*&head,node*&tail,int data){
	node*n=new node(data);
	if(head==NULL){
		head=n;
		tail=n;
		return;

	}
	else{
		tail->next=n;
		tail=n;
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

int lengthrec(node*head){
	if(head==NULL){
		return 0;
	}

	return 1+lengthrec(head->next);
}
void insertatanypoint(node*&head,node*&tail,int data,int pos){
	// case 1 pos==0
	if(pos==0){
		insertatfront(head,tail,data);
	}
	else if(pos>=lengthofll(head)){
		insertattail(head,tail,data);
	}
	else{
		node*temp=head;
		node*n=new node(data);
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		n->next=temp->next;
		temp->next=n;

	}
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

void deleteattail(node*&head,node*&tail){
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

// loop
		while(temp->next->next!=NULL){
			temp=temp->next;

		}
		delete tail;
		tail=temp;
		tail->next=NULL;
		

	}

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

bool searchrec(node*head,int key){
	if(head==NULL){
		return false;
	}



	// rec 
	if(head->data==key){
		return true;
	}
	return searchrec(head->next,key);
}
int main(){
	// node n1(5);//n1 will be object of type node
	// node n2(6);
	// n1.next=&n2;

	// // cout<<"data of n1 is "<<n1.data<<" data of n2 using n1 "<<(*n1.next).data<<endl;
	// cout<<"data of n1 is "<<n1.data<<" data of n2 using n1 "<<n1.next->data<<endl;

	node*head=NULL;
	node*tail=NULL;
	insertatfront(head,tail,90);
	insertatfront(head,tail,63);
	insertatfront(head,tail,20);
	// printlinkedlist(head);


	insertattail(head,tail,79);
	insertattail(head,tail,47);
	

	insertatanypoint(head,tail,32,3);
	insertatanypoint(head,tail,72,8);
	// printlinkedlist(head);

		printlinkedlist(head);

	deleteatfront(head,tail);

	deleteattail(head,tail);

	printlinkedlist(head);
	// if(searchiter(head,50)){
	// 	cout<<"yes key is present"<<endl;

	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }

	if(searchrec(head,32)){
		cout<<"yes key is present"<<endl;

	}
	else{
		cout<<"key is not present"<<endl;
	}





	return 0;
}