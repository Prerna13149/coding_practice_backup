/*
	Check if brackets are balanced
*/
#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch[100];
	cin>>ch;
	stack<char> s;
	int i=0;
	int flag = 0;
	while(ch[i]!='\0'){
		if(ch[i]=='('||ch[i]=='{'||ch[i]=='['){
			s.push(ch[i]);
		}
		else{
			if(ch[i]==')'){
				char a = s.top();
				if(a=='('){
					s.pop();
				}
				else{
					flag = 1;
					cout<<"Not balanced"<<"\n";
					break;
				}
			}
			else if(ch[i]=='}'){
				char a = s.top();
				if(a=='{'){
					s.pop();
				}
				else{
					flag = 1;
					cout<<"Not balanced"<<"\n";
					break;
				}
			}
			else if(ch[i]==']'){
				char a = s.top();
				if(a=='['){
					s.pop();
				}
				else{
					flag = 1;
					cout<<"Not balanced"<<"\n";
					break;
				}
			}
			else{

			}
		}
		i++;
	}
	if(flag==0){
		cout<<"Balanced"<<"\n";
	}

	return 0;
}