int Solution::solve(string A) {
    map<int,int>mp;
    for(int i=0;i<A.size();i++)
    {
        mp[A[i]]++;
        }
   int different = 0;
   for(auto i : mp)
   {
       if(i.second%2!=0) different++;
       if(i.second%2!=0 && different>1) 
       return 0;
        }
        return 1;
}
