class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();
        int start = 0, end = nums.size()-1 ;
        while(start<end){
            int sum = nums[start]+nums[end];

            if(sum == target){
                return {start+1, end+1};
            }

            if(sum>target){
                end-- ;
            }
            else{
                start++ ;
            }
        }
        return ans;
    }
};