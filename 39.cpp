#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =5 ;
    vector<int>v = { 1 ,6, 3, 2, 4};
    sort(v.begin() , v.end());
    int element = 2;
    int high = n;
    int low = 0;
    int mid , loc = -1;

    while(low<=n-1){
        int mid = (high + low)/2;
        if(element == v[mid]){
            loc = mid;
            break;

        }
        else if(element >v[mid]){
            low = mid+1;

        }
        else {
            high = mid-1;
        }

    }
    if(loc == -1){
        cout<<"Element not found"<<endl;

    }else{
        cout<<"Element"<<element<<"Found At"<<loc<<"index";
    }
}