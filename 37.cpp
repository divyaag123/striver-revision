#include<iostream>
#include<bits/stdc++.h.>
 using namespace std;
 int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i =0 ; i<n ; i++){
            ans = ans^nums[i];
        }
        return ans;
     }
     int main(){
        vector<int>nums= {1 ,2,2};
        int n =findMaxConsecutiveOnes(nums);
        cout<<n;

     }