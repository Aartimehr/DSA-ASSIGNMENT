class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() <= 1){
            return nums.size();
        }

        int count= 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[count]){
                count++;
                nums[count] = nums[i];
            }
        }

        return count + 1;
    
           }
};
