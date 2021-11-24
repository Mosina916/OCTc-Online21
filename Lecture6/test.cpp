#include<iostream>
using namespace std;
int main(){
	int count=0;
	char ch;
	// cin>>ch;//'T'
	ch=cin.get();//'T'

// loop
	while(ch!='$'){
		count=count+1;//0+1//4
	// cin>>ch;//$
		ch=cin.get();
		


	}
	cout<<"count of characters "<<count<<endl;
	





	return 0;
}