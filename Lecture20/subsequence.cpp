#include<iostream>
using namespace std;
int co=0;

void subsequence(char inputarr[],int i,char out[],int j){
	// base case
	if(inputarr[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		co++;
		return;

	}


	// recursive case
	// without a
	subsequence(inputarr,i+1,out,j);



	// with a
	out[j]=inputarr[i];
	subsequence(inputarr,i+1,out,j+1);





}
int main(){
	char inputarr[100];
	cin>>inputarr;//"abc"
	char out[1000];


	subsequence(inputarr,0,out,0);

	cout<<"count of subsequence is "<<co<<endl;



	return 0;
}