#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            int p=x-y;
            cout<<p<<endl;
            
        }else if(y>x){
            int q=y-x;
            cout<<q<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}
