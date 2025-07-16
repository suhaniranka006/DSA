class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
//         Treat array values as pointers to indexes:

// Think of the array as a linked list, where nums[i] is the next node

// The duplicate creates a cycle

        //floyd's cycle method

 

            int slow=nums[0];
            int fast=nums[0];

            //find intersection point
        do{
                    slow=nums[slow];
         fast=nums[nums[fast]];

        } 
        while(slow!=fast);


        //phase 2 
       //find duplicate
       slow=nums[0];

       while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];

       }

       return slow;
    }
};