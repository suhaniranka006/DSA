class Solution {
public:
    bool increasingTriplet(vector<int>& arr) {
    int n = arr.size();
    if (n < 3) return false; // No triplet possible if fewer than 3 elements

    vector<int> leftMin(n, INT_MAX);
    vector<int> rightMax(n, INT_MIN);

    // Fill leftMin array
    leftMin[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        leftMin[i] = min(leftMin[i - 1], arr[i]);
    }

    // Fill rightMax array
    rightMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        rightMax[i] = max(rightMax[i + 1], arr[i]);
    }

    // Find the triplet
    for (int j = 1; j < n - 1; ++j) {
        if (leftMin[j - 1] < arr[j] && arr[j] < rightMax[j + 1]) {
            return true;
        }
    }

    return false; // No such triplet found
}

    
};