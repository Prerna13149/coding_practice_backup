/*
	Sort a string
*/

#include <iostream>
#include <cstring>
using namespace std;

void sort_string(char ch[]){
	int n = strlen(ch);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1 ; j++)
		{
			if(ch[j]>ch[j+1]){
				swap(ch[j], ch[j+1]);
			}
			/* code */
		}
		/* code */
	}

}
int main(int argc, char const *argv[])
{
	char ch[1000];
	cin>>ch;
	sort_string(ch);
	cout<<ch<<"\n";
	return 0;
}