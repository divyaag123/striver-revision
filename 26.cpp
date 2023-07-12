#include<iostream>
using namespace std;
// program to find whether this char exist in the string or not(only lowercase char)

int  main(){
    string s;
    cin>>s;
    int hash[26] = {0};

    
    //precompute
    for(int i=0 ; i<s.size() ; i++){
        hash[s[i] - 'a']++;

    } 
    




    //fetch
    int q;
    cin>>q;
    while(q--){
        char x;
        cin>>x;
        cout<<hash[x - 'a']<<endl;
        
    }

}