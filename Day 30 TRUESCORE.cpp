#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int A,B,C,D;
	    cin>>A>>B;
	    cin>>C>>D;
	    if(C>=A&&D>=B){
	       cout<<"possible"<<endl;
	    }
	    else{
	        cout<<"impossible"<<endl;
	    }
   }
}
