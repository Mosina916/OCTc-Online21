#include<iostream>
using namespace std;
class node{
public:
	string key;
	int val;
	node*next;
	// constructor
	node(string k,int v){
		key=k;
		val=v;
		next=NULL;
	}
};

class hashmap{
	int ts;
	int cs;
	node**arr;
public:
	hashmap(int size=7){
		ts=size;
		cs=0;
		arr=new node*[size];
		for(int i=0;i<ts;i++){
			arr[i]=NULL;
		}



	}
	int hashfunction(string key){
		int ans=0;
		int mul=1;
		for(int i=0;i<key.length();i++){
			// ans=ans+(key[i]*mul)%ts;
			ans=ans+(key[i]%ts*mul%ts)%ts;
			mul=(mul*29)%ts;//29


		}
		ans=ans%ts;
		return ans;
	}

	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;
		// double size of table
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		for(int i=0;i<ts;i++){
			arr[i]=NULL;
		}
		// copy elemets from oldarr to arr
		for(int i=0;i<oldts;i++){
			node*head=oldarr[i];
			while(head!=NULL){
				insert(head->key,head->val);
				head=head->next;
			}

		}


		delete[]oldarr;




	}

	void insert(string key,int val){
		int indx=hashfunction(key);//8
		node*n=new node(key,val);
		n->next=arr[indx];
		arr[indx]=n;
		cs++;//2
		if(cs/(ts*1.0)>0.6){
			rehashing();//seaperate chaining technique
		}


	}
	node* search(string key){
		int index=hashfunction(key);//4
		node*head=arr[index];
		while(head!=NULL){
			if(head->key==key){
				// return true;
				return head;

			}
			head=head->next;
		}
		// return false;
		return NULL;

	}

	void print(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
			node*head=arr[i];
			while(head!=NULL){
				cout<<head->key<<"--> ";
				head=head->next;
			}

			cout<<"NULL"<<endl;

		}
	}

	int& operator[](string key){
		node*ans=search(key);//1600
		// case 2 fruit present nahi hai tou wo daalna 
		if(ans==NULL){
			int g;//garbage value
			insert(key,g);
			ans=search(key);//4000;
			return ans->val;

		}
		// case1 fruit already present hai tou bus price ko update karna hai
		else{
			return ans->val;

		}
	}


};
int main(){
	hashmap h;
	h.insert("Apple",1000);
	h.insert("Kiwi",1200);
	h.insert("Grapes",600);
	h.insert("Banana",400);
	h.print();

	h.insert("guava",700);
	cout<<endl;

	h.print();
	// arr[5]=5*5;

	// h["Kiwi"]=200;//[] overload

	h["abc"]=800;
	h["Banana"]=1300;


	cout<<h["abc"]<<endl;
	cout<<h["Banana"]<<endl;

	return 0;
}