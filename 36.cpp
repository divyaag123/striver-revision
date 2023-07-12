 #include<bits/stdc++.h>
 using  namespace std;
 int findMaxConsecutiveOnes(vector<int>& nums) {
     // using hashing
     int maxii = nums[0];
     int n = nums.size();
     for(int i =0 ; i<n ; i++){
         maxii = max(maxii , nums[i]);


     }
     int hash[maxii] = {0};
     for(int i =0 ; i<n ; i++){
         hash[nums[i]]++;

     }
     for(int i =0 ; i<n ; i++){
         if(hash[i]==1){
             return i;
         }
     }
return 0;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>hlo;
        int n =  nums.size();
        for(int i =0 ; i<n-1; i++){
            for(int j=i+1 ; j<n;j++){
                
                if(nums[i] + nums[j] ==target) {
                            hlo.push_back(i);
                            hlo.push_back(j);
                            return hlo;
                }
            }
        }
        return hlo;
    } 
     vector<int> twoSum(vector<int>& nums, int target) {
      //better solution is using hashing
      //precompute
       map<int , int>mpp;
       vector<int>hlo;
       int n = nums.size();
       for(int i = 0; i<n ; i++){
           int a = nums[i];
           int more = target - a;
           if(mpp.find(more) != mpp.end()){
               hlo.push_back(i);
               hlo.push_back(mpp[more] );
               return  hlo;
           }
           mpp[a]=i;
       }
       return hlo;

    }
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mpp;
        for(int i = 0;i<n ; i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>nums.size()/2)
            return it.first;
        }
        return 0;
    }
    void nextPermutation(vector<int>& nums)  {  
        int n = nums.size(), k , l;
        for(int k = n-2 ; k>=0; k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        } 
        if(k<0)
        {
            reverse(nums.begin() , nums.end());
        }
        else {
            for(l = n-1; l >k ; l--){
                if(nums[l]>nums[k])
               break;
            }
            swap(nums[k] , nums[l]);
            reverse(nums.begin() + k +1 , nums.end());
        }
        
    }

    int main(){
        vector<int>nums = {1,1,1,0,1,0,1,1};
        int h = findMaxConsecutiveOnes(nums);
        cout<<h;
    }