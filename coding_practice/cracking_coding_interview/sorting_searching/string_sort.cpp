/*
	Sort the strings
*/
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(char ch1[100], char ch2[100]){
	int arr[128]={0};
	int i=0;
	while(ch1[i]!='\0'){
		int a = ch1[i];
		arr[a]++;
		i++;
	}
	i=0;
	while(ch2[i]!='\0'){
		int a = ch2[i];
		arr[a]--;
		i++;
	}
	for (int i = 0; i < 128; ++i)
	{
		if(arr[i]!=0){
			return false;
		}
		/* code */
	}
	return true;

}
void mycopy(char ch[], char soln[1000][1000], int k){
	int i=0;
	while(ch[i]!='\0'){
		soln[k][i] = ch[i];
		i++;
	}
	return;
}
void bubbleSort(char arr[1000][1000], int n, char soln[1000][1000]){
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		//soln[k] = arr[i];
		mycopy(arr[i], soln, k);
		k++;
		for (int j = i+1; j < n; j++)
		{
			bool comp = compare(arr[i], arr[j]);
			if(comp){
				//cout<<"k: "<<k<<"\n";
				mycopy(arr[j], soln, k);
				k++; 
			}
			
			/* code */
		}
		/* code */
	}
	return;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	char mat[1000][1000];
	char soln[1000][1000];
	int i=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>mat[i];
		/* code */
	}
	bubbleSort(mat, n, soln);
	for (int i = 0; i < n; ++i)
	{
		cout<<soln[i]<<" ";
		/* code */
	}
	return 0;
}