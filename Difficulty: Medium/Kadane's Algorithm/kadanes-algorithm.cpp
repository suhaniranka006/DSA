class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        
        // int max_sum=INT_MIN;
        
        // for(int i=0;i<n;i++){
        //     int curr_sum=0;
        //     for(int j=i;j<n;j++){
        //         curr_sum+=arr[j];
                
        //         max_sum=max(max_sum,curr_sum);
        //     }
        // }
        
        // return max_sum;
        //tc o(n^2)
        //sc o(1)
        
        
        
        
        //better - skip duplciates - kadane algo
        
        int curr_sum=0;
        int max_far=INT_MIN;
        
        for(int i=0;i<n;i++){
            curr_sum+=arr[i];
            
           if(curr_sum>max_far){
               max_far=curr_sum;
               
           }
            
            if(curr_sum<0){
                curr_sum=0;
            }
        }
        
        return max_far;
        
    }
};