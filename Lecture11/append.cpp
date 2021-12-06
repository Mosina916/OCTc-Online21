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

void append(char*ar1,char*ar2){
	int i=0;
	int j=lengthofarr(ar1);

// loop
	while(i<=lengthofarr(ar2)){
		ar1[j]=ar2[i];
	i++;
	j++;

	}


	cout<<"arr1 : "<<ar1<<endl;
	cout<<"arr2 : "<<ar2<<endl;

	

}


int main(){
	char ar1[100];
	cin.getline(ar1,100);//"hello"

	char ar2[100];
	cin.getline(ar2,100);//"wor"

	append(ar1,ar2);

	


	return 0;
}