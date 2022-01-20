#include<iostream>
#include<vector>
using namespace std;
int main(){
	// syntax
	// vector<datatype> name;
	// vector<char> v;
	


	vector<int> v;


	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);




	cout<<"vector size "<<v.size()<<endl;//elements present
	cout<<"vector capacity "<<v.capacity()<<endl;//elements present

	v.pop_back();

	cout<<"vector size "<<v.size()<<endl;//elements present
	cout<<"vector capacity "<<v.capacity()<<endl;//elements present

// 	cout<<"vector capacity "<<v.max_size()<<endl;//elements present

// // print array
// 	for(int i=0;i<v.size();i++){
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;


// 	if(v.empty()==false){
// 		cout<<"vector is not empty"<<endl;
// 	}
// 	else{
// 		cout<<"vector is empty"<<endl;

// 	}

// 	cout<<v.front()<<endl;//2
// 	cout<<v.back()<<endl;//6


	// v.pop_back();

	// // for(int i=0;i<v.size();i++){
	// // 	cout<<v[i]<<" ";
	// // }
	// // cout<<endl;


	// // v.insert(v.begin(),8);


	// v.insert(v.begin()+2,80);//addreess


	// // for(int i=0;i<v.size();i++){
	// // 	cout<<v[i]<<" ";
	// // }
	// // cout<<endl;


	// vector<int>v1(10);//v1 size will be 10 and they get initilized with 0


	// for(int i=0;i<10;i++){
	// 	cout<<v1[i]<<" ";
	// }

	// cout<<endl;

	// v1.push_back(29);

	// for(int i=0;i<v1.size();i++){
	// 	cout<<v1[i]<<" ";
	// }

	// cout<<endl;
	// 	cout<<"vector size "<<v1.size()<<endl;//elements present //11
	// cout<<"vector capacity "<<v1.capacity()<<endl;//elements present //


	







	


	return 0;
}