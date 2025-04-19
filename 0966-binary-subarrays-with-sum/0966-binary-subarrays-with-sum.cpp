class Solution {
public:

    //jb tk subarras <=goal - sbaray < goal
   int numSubarraysWithSum(vector<int>& nums, int goal) {
        return f(nums,goal)-f(nums,goal-1);

}

int f(vector<int>&nums,int goal){
  int left=0;

  int currsum=0;
  int sum=0;
    int count=0;
  if(goal<0){
    return 0;
  }

  for(int right=0;right<nums.size();right++){
    currsum+=nums[right];
    while(currsum>goal){
      currsum-=nums[left];
      left++;

    }
    count+=right-left+1;
  }
  return count;
}

};