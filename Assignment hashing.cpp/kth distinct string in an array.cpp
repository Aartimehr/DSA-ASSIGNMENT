class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto i : mp)
        {
            if(==1 && k==i)
            return arr[i];
            
        }
        return k;
    }
};
