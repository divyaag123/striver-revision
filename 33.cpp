#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void missing(int nums[], int n){
     int hash[n+1] = {0};
    for(int i =0 ; i<n ;i++){
        hash[nums[i]]++ ;

    }
    for(int i=0 ; i<n ; i++){
        if(hash[i]==0){
            cout<<i;
        }
    }
}
int main(){
    int nums[] = {0,2};

    int n = 2;
    missing(nums , n);

  
}
