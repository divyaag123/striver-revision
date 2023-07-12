#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>&nums ){
      
        int n = nums.size();
    
    for(int i =0 ; i<n ; i++){
          int cnt =0;
        for(int j =0 ; j <n ; j++){
            if(nums[i] == nums[j]){
                cnt +=1;
            }

            
        }
        if(cnt == 1){
        return nums[i-1]; 
        }
    }
    return 0;
}
int main(){
    vector<int>nums = {2,2,1};
    int o = missing(nums);
    cout<<o;


}