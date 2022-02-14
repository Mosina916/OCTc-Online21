#include <iostream>
#include <stack>
using namespace std;
bool isbalanced(char*arr){ //"[({})()]""
	stack<char> s;


	for(int i=0;arr[i]!='\0';i++){
		char ch=arr[i];//')'

		if(ch=='('||ch=='{'||ch=='['){
			s.push(ch);
		}
		else if(ch==')'){
			if(!s.empty()&&s.top()=='('){
					s.pop();
				}
				else{
					return false;
				}

		}
		else if(ch=='}'){
			if(!s.empty()&&s.top()=='{'){
					s.pop();
				}
				else{
					return false;
				}

		}
		else{

			if(!s.empty()&&s.top()=='['){
					s.pop();
				}
				else{
					return false;
				}

		}
		}
	// switch(ch){
	// 	case '(':
	// 	case '{':
	// 	case '[': s.push(ch);
	// 			break;

	// 	case ')':
	// 			if(!s.empty()&&s.top()=='('){
	// 				s.pop();
	// 			}
	// 			else{
	// 				return false;
	// 			}
	// 			break;
	// 	case '}':
	// 			if(!s.empty()&&s.top()=='{'){
	// 				s.pop();
	// 			}
	// 			else{
	// 				return false;
	// 			}
	// 			break;
	// 	case ']':
	// 			if(!s.empty()&&s.top()=='['){
	// 				s.pop();
	// 			}
	// 			else{
	// 				return false;
	// 			}


	// }

	

	if(!s.empty()){
		return false;

	}
	return true;

	



}
int main(){
	char arr[]="[({})()]";
	// char arr[]="[";
	if(isbalanced(arr)){
		cout<<"yes balanced"<<endl;
	}
	else{
		cout<<"Not  balanced"<<endl;
	}




	return 0;
}