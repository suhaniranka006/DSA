class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
     int n=arr.size();
     
    //  for(int i=0;i<n;i++){
    //      for(int j=i+1;j<n;j++){
    //          if(arr[i]+arr[j]==target){
    //              return true;
    //          }
    //      }
    //  }
     
    //  return false;
     
     //tc o(n^2)
     //sc o(1)
     
     
     //better appraoch
     
     unordered_set<int>mp;
     
     for(int i=0;i<n;i++){
         int rem=target-arr[i];
         
         if(mp.find(rem)!=mp.end()){
             return true;
         }
         else {
             mp.insert(arr[i]);
         }
     }
        return false;
    }
};


//tc o(n)
//sc o(n)