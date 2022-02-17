#include<iostream>
#include<queue>
using namespace std;
class Stack{
	queue<int> q1;
	queue<int> q2;
public:
	// push
	void push(int data){
		if(q1.empty()&&q2.empty()){
			q1.push(data);

		}
		else if(!q1.empty()&&q2.empty()){
			q1.push(data);
		}
		else if(q1.empty()&&!q2.empty()){
			q2.push(data);
		}


	}


	// pop
	void pop(){
		if(!q1.empty()&&q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
		}
		else if(q1.empty()&&!q2.empty()){
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();

		}
		else{
			cout<<"underflow-->Both queues are empty"<<endl;
		}
	}


	// top
	int top(){
		if(!q1.empty()&&q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}

			// cout<<q1.front()<<endl;
			int ans=q1.front();
			q2.push(q1.front());
			q1.pop();
			return ans;
			

		}
		else if(q1.empty()&&!q2.empty()){
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			int ans=q2.front();
			q1.push(q2.front());
			q2.pop();
			return ans;

		}
		else{
			cout<<"queue is empty"<<endl;


		}
		return 0;
	}

	// empty
	bool empty(){
		if(q1.empty()&&q2.empty()){
			return true;
		}
		return false;
	}


};
int main(){
	Stack s;
	s.push(6);
	s.push(8);
	s.push(3);
	s.push(9);
	s.pop();
	s.push(19);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop(); //underflow-->Both queues are empty

	s.push(6);
	s.push(8);
	s.push(13);
	s.push(19);

	while(!s.empty()){
		cout<<s.top()<<" ";//19
		s.pop();


	}
	cout<<endl;


	return 0;
}