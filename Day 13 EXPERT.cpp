#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes hereint 
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int q=(y*100)/x;
        if(q>=50){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

}
