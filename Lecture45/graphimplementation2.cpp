#include<iostream>
#include<list>
#include<unordered_map>
// #include<map>
using namespace std;

template<typename T>
class Graph{
	// unordered_map<string,list<string> >h;
	unordered_map<T,list<T> >h;
	// map<T,list<T> >h;
public:
	// void addEdge(T u,T v,bool birder=false){//0 1
	void addedge(T u,T v,bool birder=true){
		h[u].push_back(v);
		if(birder){
			h[v].push_back(u);
		}

	}

	void print(){
		for(auto p:h){
			cout<<p.first<<" : ";
			for(auto n:p.second){
				cout<<n<<" --> ";

			}
			cout<<endl;

		}
		cout<<endl;
	}

};
int main(){

	//  Graph<string>g;
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");
	Graph<int> g;
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