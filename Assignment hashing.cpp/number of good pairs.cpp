class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     
        map<int,int>mp;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        
        if(mp[nums[i]]>1) 
        { 
            c+=mp[nums[i]]-1;
        }    
        }
        return c;
}  
};
