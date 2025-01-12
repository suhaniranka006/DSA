class Solution {
public:
    void rotate(vector<int>& a, int d) {
    //       int *temp=new int[nums.size()];
    // for(int i=0;i<nums.size();i++){
    //     temp[(i+k)%nums.size()]=nums[i];
    // }
    // for(int i=0;i<nums.size();i++){
    //     nums[i]=temp[i];
    // }
    // delete[] temp;
    // }


    //better approach
    //for left rotation
    //   int n = a.size();
    // d %= n;

    // // Reverse the elements from 0 to d-1
    // reverse(a.begin(), a.begin() + d);
    
    // // Reverse the elements from d to n-1
    // reverse(a.begin() + d, a.end());
    
    // // Reverse the entire array
    // reverse(a.begin(), a.end());


    //for right rotation
    //  int n = a.size();
    // d %= n; // Handle cases where d is greater than the size of the array

    // Reverse the elements from n-d to n-1
    // reverse(a.begin() + n - d, a.end());
    
    // // Reverse the elements from 0 to n-d-1
    // reverse(a.begin(), a.begin() + n - d);
    
    // // Reverse the entire array
    // reverse(a.begin(), a.end());






    //  int size = a.size();
    // int* newarr = new int[size];
    // int j = 0;

    // // Copy elements from k to end of the array
    // for (int i = k; i < size; i++) {
    //     newarr[j++] = a[i];
    // }
    // // Copy elements from start to k-1
    // for (int i = 0; i < k; i++) {
    //     newarr[j++] = a[i];
    // }
    // // Copy elements back to the original array
    // for (int i = 0; i < size; i++) {
    //     a[i] = newarr[i];
    // }
    // // Deallocate the memory used for the new array
    // delete[] newarr;




    
        vector<int>temp;
        int n=a.size();

       d%=n;
        
            for(int i=n-1;i>=n-d;i--){
                temp.push_back(a[i]);
            }

            reverse(temp.begin(),temp.end());

            for(int i=0;i<n-d;i++){
                temp.push_back(a[i]);
            }

        for(int i=0;i<temp.size();i++){
            a[i]=temp[i];
        }




    

    }
};