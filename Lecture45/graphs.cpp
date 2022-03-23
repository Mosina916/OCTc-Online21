#include<iostream>
#include<list>
using namespace std;
class Graph{
	list<int> *l;
	int tv;//
public:
	
	// constructor
	Graph(int ver){
		tv=ver;
		l=new list<int>[ver];

	}
	// addedge
	void addedge(int u,int v,bool birder=true){//0 1
		l[u].push_back(v);
		if(birder){
			l[v].push_back(u);
		}

	}
	void print(){
		for(int i=0;i<tv;i++){
			cout<<i<<" : ";
			for(auto ne:l[i]){
				cout<<ne<<"--> ";

			}
			cout<<endl;

		}
	}


};
using namespace std;
int main(){
	Graph g(5);
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(4,1);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);

	g.print();



	return 0;
}