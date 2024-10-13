#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,m;
	    cin>>n>>k>>m;
	    int p=k*m;
	    cout<<(n+p-1)/p<<endl;
	}

}
