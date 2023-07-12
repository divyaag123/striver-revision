#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[] , int n){
    unordered_map<int , int>m ;
    for(int  i=0 ; i <n ; i++){
        //precompute
        m[arr[i]]++;
    }

    for(auto it : m){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}
int main(){
//count the frequency of each eement in a array
int arr[7] = {2,3 ,4,3,2,34,4};
frequency(arr, 7);
}