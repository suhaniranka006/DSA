class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        
        
          //  int cnt=0;
        
        
    //   for(int i=0;i<n;i++){
    //       for(int j=i;j<n;j++){
    //           int sum=0;
    //           for(int l=i;l<=j;l++){
    //               sum+=arr[l];
                   
    //           }
    //               if(sum==k){
    //                   cnt=max(cnt,j-i+1);
    //               }
                   
               
    //       }
    //   }
        
    //     return cnt;
        
        //tc o(n^3)
        //cs o(1)
        
        
        
        
        //better approach
    //     int max_len=0;
        
    //     for(int i=0;i<n;i++){
    //         int curr_sum=0;
            
    //         for(int j=i;j<n;j++){
    //             curr_sum+=arr[j];
                
    //             if(curr_sum==k){
    //                 max_len=max(max_len,j-i+1);
    //             }
    //         }
    //     }
        
    //     return max_len;
    // }
    
    //tc o(n^2)
    //sc o(1)
    
    
    
      unordered_map<int, int> mp; // prefix sum -> first index
    int max_len = 0;
    int curr_sum = 0;
  
    for (int i = 0; i < n; i++) {
        curr_sum += arr[i];

        // Case 1: current sum equals k
        if (curr_sum == k) {
            max_len = i + 1;
        }

        // Case 2: if (curr_sum - k) has been seen before
        if (mp.find(curr_sum - k) != mp.end()) {
            max_len = max(max_len, i - mp[curr_sum - k]);
        }

        // Case 3: store current prefix sum if it hasn't been seen
        if (mp.find(curr_sum) == mp.end()) {
            mp[curr_sum] = i;
        }
    }

    return max_len;
        
    }
    
    
    
};