#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x==0){
	        cout<<0<<endl;
	    }else if(n/2>=x){
	        cout<<x<<endl;
	    }else if(n/2<x){
	        int p=n-x;
	        cout<<p<<endl;
	    }else{
	        int q=n-x;
	        cout<<q<<endl;
	    }
	}

}
