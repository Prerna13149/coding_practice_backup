/*
	Rotate a string by k characters
*/
#include <iostream>
#include <cstring>
using namespace std;

void reverse(char ch[], int st, int end){
	int i= st;
	int j = end;
	while(i<j){
		swap(ch[i], ch[j]);
		i++;
		j--;
	}
	return;
}
void rotateString2(char ch[], int k){
	int n = strlen(ch);
	reverse(ch, 0, n-1);
	reverse(ch, 0, k-1);
	reverse(ch, k, n-1);
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cin.get();
	char ch[1000];
	cin>>ch;
	rotateString2(ch, n);
	cout<<ch<<"\n";
	return 0;
}