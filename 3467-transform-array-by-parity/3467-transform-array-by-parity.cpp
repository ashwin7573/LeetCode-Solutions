class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>ash;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
           
            if(nums[i]%2==0){
                ash.push_back(0);
            }
            else{
                ash.push_back(1);
            }
            sort(ash.begin(), ash.end());
        }
        return ash;
    }
};