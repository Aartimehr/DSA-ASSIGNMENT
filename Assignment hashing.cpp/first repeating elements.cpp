int Solution::solve(vector<int> &A) {
  set<int>Aa;
  int ans=-1;
  for(int i=A.size()-1;i>=0;i--)
  {
    if(Aa.find(A[i])!= Aa.end())
    {
        ans= A[i];
    }
    Aa.insert(A[i]);
        } 
        return ans;
}
