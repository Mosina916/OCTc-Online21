#include<iostream> 
using namespace std;
void toh(int n,char src,char helper,char dest){
	// base case
	if(n==0){
		return;
	}


	toh(n-1,src,dest,helper);
	cout<<"move the disk "<<n<<" from "<<src<<" to the "<<dest<<endl;
	toh(n-1,helper,src,dest);

}


// fact(5)=5*fact(4);
int main(){
	int n;
	cin>>n;

	toh(n,'A','B','C');


	return 0;
}