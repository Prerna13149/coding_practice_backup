/*
	Subsequences of a string
*/

#include <iostream>
using namespace std;

void subsequences(char ch[], char out[], int i, int k){
	if(ch[i]=='\0'){
		out[k] = '\0';
		cout<<out<<"\n";
		return;
	}
	out[k] = ch[i];
	subsequences(ch, out, i+1, k+1);
	subsequences(ch, out, i+1, k);
	return;
}

int main(int argc, char const *argv[])
{
	char ch[1000];
	cin>>ch;
	char out[1000];
	subsequences(ch, out, 0, 0);
	return 0;
}