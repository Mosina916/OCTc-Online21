#include<iostream>
using namespace std;
int main(){
	char arr[100];
	int n;
	cin>>n;
	cin.ignore();//1 char ignore
	cin.getline(arr,100);

	cout<<n<<endl;
	cout<<arr<<endl;



	return 0;
}