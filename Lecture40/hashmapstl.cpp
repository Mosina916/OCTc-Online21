#include<iostream>
#include <unordered_map>
// #include <map>

using namespace std;
// map--->key sort

// unordered map-->sort nahi 
int main(){
	unordered_map<string,int> h;//0(1)
		// map<string,int> h;
	// h.insert("xyz",400);
	// h.insert("Kiwi",1200);
	// h.insert("Grapes",600);
	// h.insert("Banana",400);
	// h.print();

	// h.insert("guava",700);
	h["Abc"]=800;
	h["Banana"]=1300;
	h["Apple"]=1000;
	h["Kiwi"]=1200;
	h["Grapes"]=600;

	// 3rd way
	pair<string,int>p("Papaya",100);
	h.insert(p);

	h.insert(make_pair("Blackberry",450));

	// for each
	for(auto fruit:h){
		cout<<fruit.first<<" "<<fruit.second<<endl;

	}


	
	return 0;
}