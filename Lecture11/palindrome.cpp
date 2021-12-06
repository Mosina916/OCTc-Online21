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

bool ispalindromic(char *arr){//"abxxa"
	int i=0;
	int j=lengthofarr(arr)-1;
	// loop
	while(i<j){

	if(arr[i]==arr[j]){
		i++;
		j--;


	}
	else{
		return false;

	}

	}

	return true;
	





}
int main(){
	char arr[100];
	cin.getline(arr,100);//"abxxa"
	// ispalindromic(arr);//yes or no 
	if(ispalindromic(arr)){
		cout<<"yes palidromic "<<endl;
	}
	else{
		cout<<"Not palidromic "<<endl;

	}


	return 0;
}