/*
	Find substrings of a given string
*/

#include <iostream>
#include <cstring>
using namespace std;

void print_str(char ch[], int s, int e){
	while(s<=e){
		cout<<ch[s];
		s++;
	}
	return;
}

void print_substrings(char ch[]){
	int n = strlen(ch);
	int i = 0;
	int j = 0;
	while(i<n){
		j = i;
		while(j<n){
			print_str(ch, i, j);
			cout<<"\n";
			j++;
		}
		i++;
	}
}

int main(int argc, char const *argv[])
{
	char ch[1000];
	cin>>ch;
	print_substrings(ch);
	return 0;
}