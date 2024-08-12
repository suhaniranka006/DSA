class KthLargest {
public:

//brute force
//tc : onlogn

//check submisiton

//tc oklogk
int k;
 priority_queue<int, vector<int>, greater<int>> minHeap;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;

        for(auto num:nums){
            add(num);
        }

        //sorted in descending order


    }
    

    


    int add(int val) {
       
       if (minHeap.size() < k || minHeap.top() < val) {
            minHeap.push(val);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        return minHeap.top();
    
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */