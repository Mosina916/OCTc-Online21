#include<iostream>
using namespace std;
int main(){
	// int a=134534;
	// cout<<a<<endl;//10


	// char ch='R';
	// cout<<ch<<endl;//10


	// int arr1[4]={2,3,4,5};
	// cout<<arr1<<endl;//&arr[0]


// datatype nameofarray[size of array]
	// char arr[4]={'E','A','S','T'};//initilization

	// cout<<arr<<endl;


	// char arr[5]={'E','A','S','T','\0'};//initilization

	// cout<<arr<<endl;

	// cout<<(void *)arr<<endl;
	// cout<<(void *)(arr+1)<<endl;

// ignore the size
	// char arr[]={'E','A','S','T','\0'};//string

	// cout<<arr<<endl;


	// char arr6[4]="DOG";//every string has null at the end 

	// cout<<arr6<<endl;

	// // char arr[];


	// char arr4[100];
	// cin>>arr4;//more than 1 charcters pe kaam kar raha hota hai
	// cout<<arr4<<endl;
// 	char arr[100];
// 	char ch;
// 	ch=cin.get();//1 char bus leta hai


// 	int i=0;


// // loop
	// while(ch!='\n'){
	// 	arr[i]=ch;
	// 	i++;//4
	// 	ch=cin.get();//'\n'

	// }

// 	cout<<arr<<endl;


	// cin.getline(arrayname,array size,delimiter);//by default -->'\n'

	// char arr8[100];
	// cin.getline(arr8,100);
	// cout<<arr8<<endl;


	char arr8[100];
	cin.getline(arr8,100,'#');
	cout<<arr8<<endl;


	




	
	













	return 0;
}