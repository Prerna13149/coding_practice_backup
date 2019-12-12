#include <iostream>
#include <queue>
using namespace std;
priority_queue<int> pq;
void find(priority_queue<int> pq, int k, int i){
    if(i<k){
    	cout<<-1<<" ";
        return;
    }
    int t;
    while(i>=k-1){
    	//cout<<"here"<<" ";
        t = pq.top();
        pq.pop();
        if(i==k-1){
        	cout<<t<<" ";
        }
        
        i--;
    }
    //cout<<t<<" ";
    return;
}
int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n, k;
	    cin>>k>>n;
	    int i=0;
	    int num;
	    while(i<n){
	        cin>>num;
	        pq.push(num);
	        find(pq, k, i);
	        i++;
	    }
	    cout<<"\n";
	}
	return 0;
}