/*
	Create your own readline function which works like cin.getline()
*/

#include <iostream>
using namespace std;

void readline(char ch[], int n, char delimiter='\n'){
	int i = 0;
	char res;
	res = cin.get();
	while(res!=delimiter){
		ch[i] = res;
		i++;
		res = cin.get();
	}
	ch[i]='\0';
	return;
}

int main(int argc, char const *argv[])
{
	char ch[1000];
	readline(ch, 1000);
	cout<<ch<<"\n";
	return 0;
}