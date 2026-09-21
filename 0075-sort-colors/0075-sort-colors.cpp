class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0; //count tells how many numbers we have to put

        for(int i = 0; i<n; i++){
            if(0==nums[i]){
                count0++ ;
            }
            if(1==nums[i]){
                count1++ ;
            }
            if(2==nums[i]){
                count2++ ;
            }
        }
        int index = 0;
        for(int i = 0; i<count0; i++){
            nums[index]=0 ;
            index++ ;
        }
        for(int i = 0; i<count1; i++){
            nums[index]=1 ;
            index++ ;
        }
        for(int i = 0; i<count2; i++){
            nums[index]=2 ;
            index++ ;
        }
    }
};