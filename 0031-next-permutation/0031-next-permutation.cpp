class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //brute force 
        // 1.generate all permutations -- by recursion(sorted)
        // 2.linear search for given permutation
        // 3.find next permutation

        //t(n!*n)
        //sc(o(n)+o(n))

        //better for cpp usrs
        //we have inbuilt next_permutation stl

        next_permutation(nums.begin(),nums.end());
        
    }
};