#include<iostream>
using namespace std;

char arr[100][100]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phonekypad(char input[],int i,char out[],int j){

	// base case
	if(input[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;

		return;
	}

	// recursive case
	char ch=input[i];//'2'
	int index=ch-'0';//2

	for(int k=0;arr[index][k]!='\0';k++){
			out[j]=arr[index][k];//'A'
		phonekypad(input,i+1,out,j+1);

	}

}
int main(){
	char input[1000];
	char out[1000];
	cin>>input;//"23"


	phonekypad(input,0,out,0);



	return 0;
}