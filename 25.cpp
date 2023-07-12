#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // number hashing using stl
    //map contains a key and a corresponding value
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
     map< int , int> mpp;
     for(int i= 0 ; i<n ; i++){
        mpp[arr[i]]++;
     } 
     // ordered map by default
     for(auto it : mpp){
     cout<<it.first<<"-> "<<it.second<<endl;


     }
     int q;
     cin>>q;
     while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
        
     }




}