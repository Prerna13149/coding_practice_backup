#include <iostream>
using namespace std;

bool checkRight(char mat[1000][1000], int i, int j, int m, char ch[1000]){
	int k = 0;
	while(ch[k]!='\0' && j!=m){
		if(ch[k]!=mat[i][j]){
			return false;
		}
		else{
			k++;
			j++;
		}
	}
	if(ch[k]=='\0'){
		return true;
	}
	return false;
}

bool checkDown(char mat[1000][1000], int i, int j, int n, char ch[1000]){
	int k = 0;
	while(ch[k]!='\0' && i!=n){
		if(ch[k]!=mat[i][j]){
			return false;
		}
		else{
			k++;
			i++;
		}
	}
	if(ch[k]=='\0'){
		return true;
	}
	return false;
}

bool search(char mat[1000][1000], int n, int m, char ch[1000]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mat[i][j]==ch[0]){
				bool right = checkRight(mat, i, j, m, ch);
				if(right){
					cout<<"found right"<<"\n";
					return true;
				}
				else{
					bool down = checkDown(mat, i, j, n, ch);
					if(down){
						cout<<"found down"<<"\n";
						return true;
					}
				}
			}
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{
	char ch[1000];
	cin>>ch;

	char mat[1000][1000];
	int n, m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char a;
			cin>>a;
			mat[i][j] = a;
		}
	}

	if(search(mat, n, m, ch)){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}
	return 0;
}