class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int count=nums[0];
        for(auto x: mp)
        {
            if(x.second>mp[count])
            count = x.first;
        }
             return count;

    }
};
