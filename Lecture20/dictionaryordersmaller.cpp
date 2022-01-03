#include<iostream>
using namespace std;
#include <algorithm>
#include<cstring>
string arr[1000000];
int k=0;
void permutation(string inp,int i,string orgi){
	// base case
	if(inp[i]=='\0'){
		if(inp<orgi){
			// cout<<inp<<endl;
			arr[k]=inp;//arr[]
			k++;


		}
		
		return;
	}


	// recursive case
	for(int j=i;inp[j]!='\0';j++){
		swap(inp[i],inp[j]);
		permutation(inp,i+1,orgi);
		swap(inp[i],inp[j]);


	}

	


}
int main(){
	// char inputarr[100];
	// cin>>inputarr;//"abc"


	string inputarr;
	cin>>inputarr;//"cab"

	string orgi=inputarr;//"cab"


	// s=cab

	sort(inputarr.begin(),inputarr.end());
	// inputarr="abc"

	
	permutation(inputarr,0,orgi);


	// cout<<k<<endl;

	sort(arr,arr+k);
	for(int j=0;j<k;j++){
		cout<<arr[j]<<endl;
	}


	



	return 0;
}