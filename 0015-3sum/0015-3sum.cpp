class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //brute force
        // vector<vector<int>>result;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             int sum=nums[i]+nums[j]+nums[k];
        //             if(sum==0){
        //            vector<int>triplet= {nums[i],nums[j],nums[k]};

        //            //tov avoid duplicate triplet sort 
        //            sort(triplet.begin(),triplet.end());
        //            // find in result if triplet forund or not 
        //           // if not found then iteraot goes to add triplet to result
        //           //if found iterator goea to reuslt.end 
        //              if (find(result.begin(), result.end(), triplet) == result.end()) {
        //                 result.push_back(triplet);
        //             }
        //             }
        //         }
        //     }
        // }
        //     return result;



        //brute force
    //     int n=nums.size();
    //     set<vector<int>>st;

    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             for(int k=j+1;k<n;k++){
    //                 if(nums[i]+nums[j]+nums[k]==0){
    //                     vector<int>temp={nums[i]+nums[j]+nums[k]};

    //                     sort(temp.begin(),temp.end());
    //                     st.insert(temp);
    //                 }

                   
                    
    //             }

    //         }
    //     }

    //     vector<vector<int>>ans(st.begin(),st.end());
    //     return ans;
    // }
    //tc o(n^3)
    //sc o()



    //learn optimise approach 3 pointers
    //better - we can use hash(store i,j sum in hash) to avoid duplicacy and remove third loop
    //tc o(n^2)

    // int n=nums.size();
    //     set<vector<int>>st;

    //     for(int i=0;i<n;i++){
    //         set<int>hashset;
    //         for(int j=i+1;j<n;j++){
    //             int third=-(nums[i]+nums[j]);

    //             if(hashset.find(third)!=hashset.end()){
    //                     vector<int>temp={nums[i],nums[j],third};
    //                 sort(temp.begin(),temp.end());
    //                 st.insert(temp);
    //             }
    //             hashset.insert(nums[j]);
    //         }
    //     }

    //     vector<vector<int>>ans(st.begin(),st.end());
    //     return ans;


        //best -- avoid using extra set
        //first sort array
       // then use hashset to store data
      

 vector<vector<int>> ans;
 int n=nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        //remove duplicates:
        if (i != 0 && nums[i] == nums[i - 1]) continue;

        //moving 2 pointers:
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum =nums[i] + nums[j] + nums[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                //skip the duplicates:
                while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[k + 1]) k--;
            }
        }
    }
    return ans;
    }
};