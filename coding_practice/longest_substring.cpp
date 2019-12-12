#include <iostream>
using namespace std;

int length(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}

bool check(char ch[], int s, int e){
	int arr[128] = {0};
	for(int i=s;i<=e;i++){
		int a = ch[i]-'a';
		arr[a]++;
	}
	for(int i=0;i<128;i++){
		if(arr[i]>1){
			return false;
		}
	}
	return true;
}
void longest_substring(char ch[]){
	int n = length(ch);
	int mat[n+1][n+1]={0};
	for(int i=0;i<=n;i++){
		mat[i][i] = 1;
	}
	int max = 1;
	for(int len = 2;len<=n;len++){
		for(int i=1;i<=n-len-1;i++){
			int k = i+len-1;
			bool out = check(ch, i, k);
			if(out==1){
				mat[i][k] = mat[i][k-1];
			}
			else{
				mat[i][k] = mat[i][k-1] + 1;
			}
			if(mat[i][k]> max){
				max = mat[i][k];
			}
		}
	}

	for(int i=0;i<=n;i++){
		for(int j=0;i<=n;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(int argc, char const *argv[])
{
	char ch[100000];
	cin.getline(ch, 100000);
	longest_substring(ch);
	return 0;
}