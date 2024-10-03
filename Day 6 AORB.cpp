#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes hereint
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a=500-(x*2);
	    int b=1000-((x+y)*4);
	    int c=a+b;
	    int q=1000-(y*4);
	    int p=500-((x+y)*2);
	    int z=p+q;
	    if(z>c){
	        cout<<z<<endl;
	    }else{
	        cout<<c<<endl;
	    }
	}

}
