#include<iostream>
using namespace std;

int lengthofarr(char ch[]){//"hello"
// lengthofarr(char *ch){//"hello"
int cnt=0;
// loop
	for(int i=0;ch[i]!='\0';i++){//5
	cnt++;//5

}
	return cnt;
}


bool ispermattaionornot(char*arr,char*arr1){
	int freq[26]={0};
	int freq2[26]={0};
	// arr-->aacxy
	for(int i=0;arr[i]!='\0';i++){
		char ch=arr[i];//y
	int index=ch-'a';//'a'-'a'-->0//'c'-'a'-->99-97-->2//'x'-'a'//120-97-->23
	freq[index]=freq[index]+1;


	}
	for(int i=0;arr1[i]!='\0';i++){
		char ch=arr1[i];//y
	int index=ch-'a';//'a'-'a'-->0//'c'-'a'-->99-97-->2//'x'-'a'//120-97-->23
	freq2[index]=freq2[index]+1;


	}


	for(int i=0;i<=25;i++){
		if(freq[i]!=freq2[i]){
			return false;
		}
	}
	return true;
	
	




}

int main(){
	// char arr[]="aacxy";
	// char arr1[]="aadfz";

	char arr[]="aade";
	char arr1[]="adea";
	if(ispermattaionornot(arr,arr1)){
		cout<<"yes permutation"<<endl;
	}
	else{
		cout<<"Not permutation"<<endl;

	}

	return 0;
}