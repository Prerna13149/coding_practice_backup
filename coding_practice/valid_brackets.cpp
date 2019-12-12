#include <iostream>
#include <stack>
using namespace std;

bool checkBrackets(char ch[]){
	stack<char> s;
	int i=0;
	while(ch[i]!='\0'){
		if(ch[i]=='(' || ch[i]=='[' || ch[i]=='{'){
			s.push(ch[i]);
			i++;
		}
		else if(ch[i]==')'){
			char p = s.top();
			if(p=='('){
				s.pop();
			}
			else{
				return false;
			}
			i++;
		}
		else if(ch[i]==']'){
			char p = s.top();
			if(p=='['){
				s.pop();
			}
			else{
				return false;
			}
			i++;
		}
		else if(ch[i]=='}'){
			char p = s.top();
			if(p=='{'){
				s.pop();
			}
			else{
				return false;
			}
			i++;
		}
		else{
			i++;
		}
		
	}
	if(s.empty()){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	char ch[100000];
	cin.getline(ch, 100000);
	if(checkBrackets(ch)){
		cout<<"Balanced"<<"\n";
	}
	else{
		cout<<"Not balanced"<<"\n";
	}
}