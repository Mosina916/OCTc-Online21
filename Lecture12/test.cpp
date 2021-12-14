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
void rotatebyn(char arr[],int n){//"hello"

	// int ki=lengthofarr(arr);//5
	int k=lengthofarr(arr);//5
	int l=lengthofarr(arr);//5


	// cout<<k<<endl;
		
	for(int j=lengthofarr(arr)-1;j>=0;j--){
		arr[j+n]=arr[j];
	}

// helhello
	int s=0;

// loop
	for(int co=1;co<=n;co++){
		arr[s]=arr[k];
		k++;
		s++;

	}
	// llohello
	arr[l]='\0';

	// cout<<lengthofarr(arr)<<endl;
	
	cout<<arr<<endl;

}
int main(){
	char arr[100]="coding blocks";
	int n=7;
	rotatebyn(arr,n);



	return 0;
}