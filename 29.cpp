#include<iostream>
#include<map>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    int n = s.size();
     map<char,int>mpp;
    
    for(int  i= 0 ; i<n ; i++){
        
        mpp[s[i]]++;
    }
    for(auto it : mpp){
        cout<<it.first <<"->"<<it.second<<endl;
    }
    int q;
    cin >>q;
    while(q--){
        char s;
        cin>>s;
        cout<<mpp[s]<<endl;
    }
   
    //precompute

    


}