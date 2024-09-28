#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
	cin>>t;
	while(t--){
    int n;
    string s;
    // char ch;
    cin>>n>>s;
    int count=0;
    // bool ans=true;
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count=0;
            // if(i>=4){
                // break;
            // }
            }
        else{
            count++;
            if(count==4){
                break;
            }
        }
    }  
    if(count<4)
        cout<<"yes"<<endl;
        
    else
       cout<<"no"<<endl;
        
    }
    }
