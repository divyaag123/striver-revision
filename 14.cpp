#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //reverse of a number
    int t;
    cin>>t;
    
    while(t--){
      
        int n;
        cin>>n;
        int rev = 0;
        while(n>0){
        int last_digit = n%10;
        n = n/10;
        rev = rev*10 + last_digit;
        }
        cout<<rev<<endl;

    }
    
   
    
    

}