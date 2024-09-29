#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c,p,q,r;
        cin>>a>>b>>c;
        cin>>p>>q>>r;
        if((a+b+c)>(p+q+r)){
            cout<<"dragon"<<endl;
        }else if((a+b+c)<(p+q+r)){
            cout<<"sloth"<<endl;
        }else{
            if(a>p){
                cout<<"dragon"<<endl;
            }else if(a==p){
                if(b>q){
                    cout<<"dragon"<<endl;
                }else if(a==p&&b==q&&c==r){
                    cout<<"tie"<<endl;
                }
                else{
                    cout<<"sloth"<<endl;
                }
            }
            else{
                cout<<"sloth"<<endl;
            }
            // cout<<"tie"<<endl;
        }
        
    }
}
