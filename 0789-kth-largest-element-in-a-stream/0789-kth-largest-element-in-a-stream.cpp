class KthLargest {
public:

//brute force
//tc : onlogn
int k;
vector<int>stream;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;

        for(auto num:nums){
            stream.push_back(num);
        }

        //sorted in descending order
        sort(stream.begin(),stream.end());

    }
    

    int getIndex(int val){
        int start=0;
        int end=stream.size()-1;

        while(start<=end){
            int mid=(start+end)/2;

            if(stream[mid]==val){
                return mid;
            }
            else if(stream[mid]>val){
                end=mid-1;
            }
            else{
                start=mid+1;
            }

        }
        return start;
    }


    int add(int val) {
        int index=getIndex(val);
        stream.insert(stream.begin()+index,val);
        return stream[stream.size()-k];
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */