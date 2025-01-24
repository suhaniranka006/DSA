class Solution {
public:
    void sortColors(vector<int>&nums) {
       

            //brute force
    //             int size=nums.size();

    //         int *arr=new int[size];
    //     int k=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==0){
    //             arr[k]=0;
    //             k++;
    //         }
    //     }
        
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==1){
    //             arr[k]=1;
    //             k++;
    //         }
    //     }
    
    //   for(int i=0;i<nums.size();i++){
    //         if(nums[i]==2){
    //             arr[k]=2;
    //             k++;
    //         }
    //     }

    //     for(int i=0;i<nums.size();i++){
    //         nums[i]=arr[i];
    //     }

    //     delete[] arr;
    // }
    //tc o(n)
    //sc o(n)

    //optimised approach
    //bubble sort in place
    // for(int i=0;i<nums.size();i++){
    //     for(int j=0;j<nums.size()-1;j++){
    //         if(nums[j]>nums[j+1]){
    //             swap(nums[j],nums[j+1]);
    //         }
    //     }
    // }
    // }

    //tc o (n^2)
    //sc o(1)


    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size()-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }

}
    
};