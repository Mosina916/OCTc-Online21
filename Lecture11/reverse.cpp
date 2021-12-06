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

void reverse(char *arr){//hello

	int i=0;
	int j=lengthofarr(arr)-1;

	while(i<j){
			swap(arr[i],arr[j]);//oellh //i-->1 j-->3 olleh i-->2 j-->2
	i++;
	j--;

	}

	cout<<"reverse array is : "<<arr<<endl;


}


int main(){
	char arr[100];
	cin.getline(arr,100);//"abxxa"
	reverse(arr);


	return 0;
}