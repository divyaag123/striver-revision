#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[] , int n){
    unordered_map<int , int> mpp;
    for(int i =0 ; i<n ; i++){
        //precompute
        mpp[arr[i]]++;//map k pass key , value key : arr[i] eg 3 ; value mpp[arr[i]] 1

    }
    int maxii = INT_MIN;
    int res =-1;
    int res2 =-1;
    int minii =INT_MAX;
    for(auto it : mpp){

    if(maxii<it.second){
        res = it.first;
        maxii = it.second;

    }
   else if (minii>it.second){
       res2 = it.first;
        minii = it.second;

    }
    }
    cout<<"max"<<"->"<<maxii<<endl;
    cout<<"min"<<"->"<<minii<<endl;

    
}
int main(){
int arr[] = {3,4,5,4,3,3,1,12};
frequency(arr,8);
return 0;

}