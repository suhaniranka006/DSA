class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();


        if(n==1){
            return nums[0];
        }

        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int product=nums[i];

             if(product>maxi){
                    maxi=product;
                } 

                
            for(int j=i+1;j<n;j++){  


                        
                product=product*nums[j];
                  
                if(product>maxi){
                    maxi=product;
                }

                if(product==0){
                    break;
                }

            }
        }

        return maxi;
        
    }
};