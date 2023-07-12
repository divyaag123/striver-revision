 vector<vector<int>> threeSum(vector<int>& num) {
            sort(num.begin() , num.end());
            vector<int>temp;
            vector<vector<int>>res;
            for(int i =0; i<num.size()-2;i++)
            {

            if(  i ==0 || (i>0 && num[i] !=num[i-1]))
            {
                int lo = i+1;
                int high = num.size()-1;
                int sum = 0 - num[i];
                while(lo <high){
                    if(num[lo] + num[high] ==  sum){
                        temp.push_back(num[lo]);
                        temp.push_back(num[high]);
                        temp.push_back(num[i]);
                        res.push_back(temp);
                        while(lo<high && num[lo] == num[lo+1])lo++;
                        while(lo<high && num[high] == num[high-1])high--;



                        lo++;
                        high--;
                    }
                    else if(num[lo] + num[high] <  sum)
                    {
                        lo++;
                    }
                    else 
                        high--;
                    
                    

                }

            }
            }
   return res;
    }