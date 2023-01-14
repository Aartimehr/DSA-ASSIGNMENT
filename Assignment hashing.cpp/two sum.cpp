class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>indices;
       map<int,int>mp;
       for(int i=0;i<nums.size();i++)
       {
           if(mp.find(target-nums[i])!=mp.end())
           {
               indices.push_back(mp[target-nums[i]]);
               indices.push_back(i);
               return indices;
           }
            mp[nums[i]]=i;
       }
       return indices;
       }

};
