/*
	Find all the permutations(anagrams) of a string with unique characters
*/

#include<iostream>
#include<cstring>
using namespace std;

void permutation(char *in, int i){
	if(in[i]=='\0'){
		cout<<in<<endl;
		return;
	}
	for (int j = i; in[j]!='\0'; j++)
	{
		swap(in[i],in[j]);
		permutation(in,i+1);
		swap(in[i],in[j]);
	}
	return;
}

int main(){
	char ch[100];
	cin.getline(ch,100);
	permutation(ch,0);
	cout<<endl;
	// print_anagrams(ch,0,0);
	cout<<endl;
	return 0;
}
