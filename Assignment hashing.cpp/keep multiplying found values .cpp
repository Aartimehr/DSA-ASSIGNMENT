class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
         map<int,int>mp;
         for(int i=0;i<nums.size();i++)
         {
             mp[nums[i]]++;
         }
         for(auto i: mp)
         if(i.first==original) original*=2;
         return original;
         }
};
