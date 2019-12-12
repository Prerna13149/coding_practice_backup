/*
	Check if given 2 strings are permutations of each other
*/
#include <iostream>
#include <cstring>
using namespace std;

bool checkPermuataion(char ch1[], char ch2[]){
	int n1 = strlen(ch1);
	int n2 = strlen(ch2);
	if(n1!=n2){
		return false;
	}
	int out[26]={0};
	int i=0;
	while(ch1[i]!='\0'){
		int in = ch1[i]-'a';
		out[in]++;
		i++;
	}
	i=0;
	while(ch2[i]!='\0'){
		int in = ch2[i]-'a';
		out[in]--;
		i++;
	}
	for (int i = 0; i < 26; i++)
	{
		if(out[i]!=0){
			return false;
		}
		/* code */
	}
	return true;
}

int main(int argc, char const *argv[])
{
	char ch1[1000];
	char ch2[1000];
	cin>>ch1;
	cin>>ch2;
	// cin.getline(ch1, 1000);
	// cin.getline(ch2, 1000);
	if(checkPermuataion(ch1, ch2)){
		cout<<"Yes, permutation"<<"\n";
	}
	else{
		cout<<"Not permutation"<<"\n";
	}
	
	return 0;
}