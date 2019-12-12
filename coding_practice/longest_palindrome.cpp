#include <iostream>
using namespace std;

int getlength(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}
void longestPalindrome(char ch[]){
	int n = getlength(ch);
	bool mat[n+1][n+1] = {0};
	int max = 1;
	for(int i=0;i<=n;i++){
		mat[i][i] = 1;
	}
	for(int i=0;i<n-1;i++){
		if(ch[i]==ch[i+1]){
			mat[i][i+1] = 1;
			max = 2;
		}
	}
	int st = 0;
	for(int len=3;len<=n;len++){
		for(int i=0;i<=n-len+1;i++){
			int k = i+len-1;
			if(mat[i+1][k-1] && ch[i]==ch[k]){
				mat[i][k] = 1;
				if(k>max){
					max = k;
					st = i;
				}
			}
		}
	}
	cout<<max<<"\n";

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}

	for(int i=st;i<=max;i++){
		cout<<ch[i];
	}
}

int main(int argc, char const *argv[])
{
	char ch[10000];
	cin.getline(ch, 10000);
	longestPalindrome(ch);
	return 0;
}