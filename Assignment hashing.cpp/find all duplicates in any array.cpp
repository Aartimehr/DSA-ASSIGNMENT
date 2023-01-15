                           
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>duplicates;
            map<int,int>mp;
            for(int i=1;i<nums.size();i++)
            {
                mp[nums[i]]++;
            }
            for(auto i : mp)
            { 
                 mp[i.first]++;
               if(i.second==2)
               {
                   duplicates.push_back(i.first);
                   
               }
               else
               cout<<" ";
            }
            return duplicates;
    }

};
