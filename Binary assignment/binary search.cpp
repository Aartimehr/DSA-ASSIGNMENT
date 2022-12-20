class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high,low,midterm;
        high = nums.size();
        low  = 0;
       
        while(high > low)
        {
             midterm = (high+low)/2;
            if(nums[midterm]==target) return midterm;
            else if(nums[midterm]<target) low = midterm+1;
            else high= midterm;
        }
        return -1;
    }
};
