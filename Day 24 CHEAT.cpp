#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int count=0;
        
        for( int i=2; i<=N;i+=7){
            count++;
        }
        cout<<count<<endl;
    }
}
