#include<iostreaM>
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int  n;
long long m;
long long trees[N];
bool isWoodSufficient(int h){


}
int main(){
    cin>>n>>m;
    for(int i = 0 ; i<n ; i++){
        cin>>trees[i];

    }
    long long lo = 0 , hi = 1e9;
    while(hi- lo>1){
        long long mid = (lo+hi)/2;
        if(isWoodSufficient(mid)){
            lo =mid;

        }
        else{
            hi = mid-1;
        }

    } 
    if(isWoodSufficient){
        .
























        +
    }


}