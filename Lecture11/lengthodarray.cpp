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
int main(){
	char arr[100];
	cin.getline(arr,100);//"hello"
	cout<<"Length is : "<<lengthofarr(arr)<<endl;;


	return 0;
}