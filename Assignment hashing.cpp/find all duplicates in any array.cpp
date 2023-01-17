                           
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>duplicates;
            map<int,int>mp;
            for(int i=0;i<nums.size();i++)
            {
                mp[nums[i]]++;
            }
            for(auto i : mp)
            { 
               if(i.second>1)
               {
                   duplicates.push_back(i.first);
                   
 }
               else
               cout<<" ";
            }
            return duplicates;
    }

};


//Firstly frequency has been taken 
