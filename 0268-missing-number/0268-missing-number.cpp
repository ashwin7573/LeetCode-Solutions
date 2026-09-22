class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        // Sort array: O(n log n)
        sort(nums.begin(), nums.end());
        
        // Check if 0 is missing at the start
        if (nums[0] != 0) {
            return 0;
        }
        
        // Check for gaps between adjacent elements
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] - nums[i] != 1) {
                return nums[i] + 1; // Return immediately when a gap is found
            }
        }
        
        // If 0 to n-1 are present, the missing number must be n
        return n;
    }
};