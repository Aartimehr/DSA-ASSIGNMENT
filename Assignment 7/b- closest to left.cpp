#include <bits/stdc++.h>
using namespace std;
 int binarysearch(vector<int>A,int target,int high,int low)
 {   
      if (high<low){
        return high;
    }
    int mid = low + (high-low)/2;
    if (A[mid]>target){
        return binarysearch(A, target, mid-1, low);
    }else{
        return binarysearch(A, target, high, mid+1);
    }
    
    return mid;
    

  }
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    vector<int>Aa(k);
    for(int j=0;j<n;j++)
    {
        cin>>Aa[j];
    }
    
    for(int i=0;i<k;i++)
    {
        cout<<binarysearch(A,Aa[i],n-1,0)+1<<endl;
    }
    return 0;
    
}
