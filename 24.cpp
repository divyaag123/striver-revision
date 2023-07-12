#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // small characters hash[s[i] - 'a']
    // large characters hash[s[i] - 'A']
   
    int hash[256]={0};
     // precompute
    for(int i =0 ; i<s.length(); i++)
    {
        hash[s[i]]+= 1;
    }
    int q ; 
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
    return 0;
   
         

  
     
}