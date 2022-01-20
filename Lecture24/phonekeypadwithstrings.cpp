#include<iostream>
using namespace std;

// char arr[100][100]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
string arr[]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phonekypad(string input,int i,string out){//"23" i--2 "AE"

	// base case
	if(input[i]=='\0'){//"23\0"
		// out[j]='\0';
		cout<<out<<endl;//AD AE

		return;
	}

	// recursive case
	char ch=input[i];//'3'
	int index=ch-'0';//3

	for(int k=0;arr[index][k]!='\0';k++){
			// out[j]=arr[index][k];//'A'
		phonekypad(input,i+1,out+arr[index][k]);//"23" i=1 "A"+-->-->AE

	}

}
int main(){
	// char input[1000];
	string input,output;
	// cin>>input;


	// char out[1000];
	cin>>input;//"23"


	phonekypad(input,0,"");



	return 0;
}