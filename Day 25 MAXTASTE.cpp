#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a<=b&&c>=d){
	        int q=b+c;
	        cout<<q<<endl;
	    }else if(a<=b&&c<=d){
	        int y=b+d;
	        cout<<y<<endl;
	    }else if(a>=b&&c>=d){
	        int w=a+c;
	        cout<<w<<endl;
	    }else if(a>=b&&c<=d){
	        int g=a+d;
	        cout<<g<<endl;
	    }
	}

}
