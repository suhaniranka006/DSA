class Solution {
public:
    int rob(vector<int>& nums) {

        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>temp1;
        vector<int>temp2;


        for(int i=0;i<n;i++){
            if(i!=0){
                temp1.push_back(nums[i]);
            }

        }

        for(int i=0;i<n;i++){
            if(i!=n-1){
                temp2.push_back(nums[i]);
            }
        }
        return max(f(temp1),f(temp2));
        
    }



    int f(vector<int>&a){
        int prev=a[0];
        int prev2=0;

        for(int i=1;i<a.size();i++){
            int take=a[i];
            if(i>1){
                take+=prev2;
            }

            int nonTake=prev;

            int curr=max(take,nonTake);
            prev2=prev;
            prev=curr;
        }
        return prev;

    }
};