#include<iostream>
using namespace std;
void permutation(char inp[],int i){
	// base case
	if(inp[i]=='\0'){
		cout<<inp<<endl;
		return;
	}


	// recursive case
	for(int j=i;inp[j]!='\0';j++){
		swap(inp[i],inp[j]);
		permutation(inp,i+1);
		swap(inp[i],inp[j]);


	}

	


}
int main(){
	char inputarr[100];
	cin>>inputarr;//"abc"
	permutation(inputarr,0);
	



	return 0;
}