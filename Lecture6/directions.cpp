#include<iostream>
using namespace std;
int main(){
	char ch;
	int x=0,y=0;
	ch=cin.get();//'S'
	while(ch!='\n'){
		if(ch=='E'){
			x=x+1;
		}
		else if(ch=='W'){
			x=x-1;
		}
		else if(ch=='N'){
			y=y+1;
		}
		else {
			y=y-1;
		}


		ch=cin.get();//'\n'

	}


	// cordinates
	// cout<<"x: "<<x<<endl;
	// cout<<"y: "<<y<<endl;

	if(x>=0&&y>=0){
		// i am in ist quadrant
		for(int cou=1;cou<=x;cou++){
			cout<<'E';//EEE
		}
		for(int cou=1;cou<=y;cou++){
			cout<<'N';//EEE
		}

	}
	else if(x<=0&&y>=0){
	// i am in 2nd quadrant
		for(int cou=1;cou<=y;cou++){
			cout<<'N';//EEE
		}
		for(int cou=1;cou<=abs(x);cou++){
			cout<<'W';//EEE
		}


		// for(int cou=x;coun<0;cou++){//0<0
		// 	cout<<'W';//WW
		// }


	}
	else if(x<=0&&y<=0){
		// i am in 3rd quadrant
			for(int cou=1;cou<=abs(y);cou++){
			cout<<'S';
		}
		for(int cou=1;cou<=abs(x);cou++){
			cout<<'W';
		}


	}
	else{
		// 4th quadrant
		for(int cou=1;cou<=x;cou++){
			cout<<'E';
		}
			for(int cou=1;cou<=abs(y);cou++){
			cout<<'S';
		}

	}


	cout<<endl;




	return 0;
}