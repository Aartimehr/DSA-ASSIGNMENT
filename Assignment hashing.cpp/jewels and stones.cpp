class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<int,int>mp;
        for(int i=0;i<jewels.size();i++)
        {
            mp[jewels[i]]++;
        }
        int num=0;
        for(auto n : mp)
        {
        for(int i=0;i<stones.size();i++)
        {
            if(n.first==stones[i])
            num++;
        }
        }
        return num;
    }
};
