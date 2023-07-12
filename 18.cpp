#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void f(int l, int r , int arr[]){
    if(l>=r) return ;


    swap(arr[l],arr[r]);
    f(l+1 , r-1 , arr);
}
void j(int i , int n, int arr[]){
    if(i>=n/2) return ;
    swap(arr[i] , arr[n-i-1]);
    j(i+1 , n , arr);
}
bool g(int i , string &s){

    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size() -i -1]) return false;
    return g(i+1 , s);
    
}
  
    
int main(){
   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    f(0 , 4 , arr);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
    cout<<endl;

    j(0 , n , arr);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
      cout<<endl;

    string s ="madam";
    cout<<g(0,s);
    return 0;




}
