class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      //  vector<vector<int>>ans;
      //  int n=nums.size();

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //               vector<int>triplet={nums[i],nums[j],nums[k]};
        //                 sort(triplet.begin(),triplet.end());
        //                 ans.push_back(triplet);
        //             }
        //         }
        //     }
        // }

        // sort(ans.begin(),ans.end());
        // //remove duplicates
        // ans.erase(unique(ans.begin(),ans.end()),ans.end());
        // return ans;

        //tle 

        //better

        //extra sc
      //  use unordered map


        vector<vector<int>>ans;
        int n=nums.size();

        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){


//skip i values
          if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=n-1;

            while(left<right){


                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    vector<int>triplet={nums[i],nums[left],nums[right]};
                    ans.push_back(triplet);
                   
                    //skip duplicates
                    while(left<right && (nums[left]==nums[left+1])) left++; 
                    while(left<right  && (nums[right]==nums[right-1])) right--; 

                     left++;
                    right--;

                }

                else if(sum<0){
                    left++;
                }
                else {
                    right--;
                }
            }

            
        }

        return ans;
      
            

        
    }
};