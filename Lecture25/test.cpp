#include<iostream>
#include<ctime>
using namespace std;
int main(){
	// int arr[]={3,4,5,1,2};//o/p-->1 2 3 4 5
	// int n=sizeof(arr)/sizeof(n);
	// 3 4 5 1 2
	// int n=5;
	int n;
	int arr[100000];
	cin>>n;//5
	int number=10000;
	for (int i = 0; i < n; ++i)
	{
		// cin>>arr[i];

		arr[i]=number;
		number--;
	}



	// cout<<"before bubble sort : "<<endl;

	// for (int i = 0; i <5; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	

	// bubble sort
// int A=10;


	// time_t start=clock();
// brute force approach
	for(int i=0;i<=n-2;i++){//1<=3
		
		// for(int j=0;j<=n-2;j++){//5-2-0
		for(int j=0;j<=n-2;j++){//3<=2
		if(arr[j]>arr[j+1]){
			
			swap(arr[j],arr[j+1]);//inbuild swap

		}

	}
	
	}


	// time_t end=clock();

	// cout<<"total time "<<end-start<<endl;


// // n-->5
// 		// a little bit optimized// 
		for(int i=0;i<=n-2;i++){//4<=3
		
		// for(int j=0;j<=n-2;j++){//5-2-0
		for(int j=0;j<=n-2-i;j++){//3<=2
		if(arr[j]>arr[j+1]){
			
			swap(arr[j],arr[j+1]);//inbuild swap

		}

	}
	
	}






time_t start=clock();

// // // optimized
// int a[100000];
	for(int i=0;i<=n-2;i++){//1<=3
		int flaag=0;
		// for(int j=0;j<=n-2;j++){//5-2-0
		for(int j=0;j<=n-2-i;j++){//3<=2
		if(arr[j]>arr[j+1]){
			
			swap(arr[j],arr[j+1]);//inbuild swap
			flaag=1;//mai yaad rakh rahi hun ki array sorted nahi nahi


		}

	}


	if(flaag==0){//uska mtlb array is sorted
		break;

	}


	}

	time_t end=clock();

	cout<<"total time "<<end-start<<endl;




// 	cout<<"after bubble sort : "<<endl;

// 	for (int i = 0; i <5; ++i)
// 	{
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;



	// swap
			// // using 3rd variable swap
			// int t=arr[j];
			// arr[j]=arr[j+1];
			// arr[j+1]=t;


			// without using 3rd varible
			// a=a+b; a-->arr[j]  b-->arr[j+1]
			// b=a-b;
			// a=a-b;

			// arr[j]=arr[j]+arr[j+1];
			// arr[j+1]=arr[j]-arr[j+1];
			// arr[j]=arr[j]-arr[j+1];


			// 3rd way  in one line 
			// b=(a+b)-(a=b);

			// arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);

			// swap(v1,v2);

	



	return 0;
}