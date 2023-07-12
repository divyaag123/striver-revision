#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// program to return lower bound or upper bound using binary search
int lower_bound(vector<int>&v , int element){
    int lo = 0;
    int hi = v.size() -1 ;
    int mid ;
    while(hi - lo >1){
        int mid = (lo + hi )/2;
        if(element >v[mid]){
            lo = mid + 1;

        }
        else {
            hi = mid;
        }
    }
    if(element <= v[lo])
    {
            return lo;

    }
    else if(element <= v[hi])
    {
        return hi;

    }
   return -1;

    }
    int upper_bound(vector<int>&v , int element){
    int lo = 0;
    int hi = v.size() -1 ;
    int mid ;
    while(hi - lo >1){
        int mid = (lo + hi )/2;
        if(element >=v[mid]){
            lo = mid +1;

        }
        else {
            hi = mid;
        }
    }
    if(element < v[lo])
    {
            return lo;

    }
    else if(element < v[hi])
    {
        return hi;

    }
   return -1;

    }





int main(){
   vector<int>v = {2 , 3, 4 ,6,7,8};
   int elem = 4 ;
   int lb = lower_bound(v , elem);
   cout<<lb<<" "<<v[lb]<<endl;
   int ele = 4; 
   int up = upper_bound(v , ele);
   cout<< up<<v[up];


}