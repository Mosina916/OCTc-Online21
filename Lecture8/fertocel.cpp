#include<iostream>
using namespace std;

// void fertocel(){
// 	int init=0;
// 	int final=300;
// 	int step=20;

// 	// int init,final,step;
// 	// cin>>init>>final>>step;


// 	int fer=init;//0
// // loop
// 	while(fer<=final){//320<=300
// 		// int cel=5/9*(fer-32);//148//5/9-->0.34int/int-->int
// 		// int cel=(5*(fer-32))/9;
// 			 int cel=5.0/9*(fer-32);//float/int-->float-->0.4343

// 	cout<<fer<<"    "<<cel<<endl;

// 	fer=fer+step;//20+20-->40+20-->60+20-->80--->280+20-->300+20


// 	}
// 	// jab while khatam hoga access yahan aayega

// }



void fertocel2(int init,int final,int step){
	int fer=init;//0
// loop
	while(fer<=final){//320<=300
		// int cel=5/9*(fer-32);//148//5/9-->0.34int/int-->int
		// int cel=(5*(fer-32))/9;
			 int cel=5.0/9*(fer-32);//float/int-->float-->0.4343

	cout<<fer<<"    "<<cel<<endl;

	fer=fer+step;//20+20-->40+20-->60+20-->80--->280+20-->300+20


	}
	// jab while khatam hoga access yahan aayega

}
int main(){
	// fertocel();


	// int init=0;
	// int final=300;
	// int step=20;

	int init,final,step;
	cin>>init>>final>>step;

	fertocel2(init,final,step);

	cout<<endl;


	cin>>init>>final>>step;

	fertocel2(init,final,step);



	
	

	

	return 0;
}