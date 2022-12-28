#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>A)
{
    for(int i;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
}
void sort(vector<int>&A)
{
    for(int i=1;i<A.size();i++)
    {
        int temp=A[i];
        int j=i-1;
         while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = temp;
    }
    
}
int main()
{
    vector<int>A = {6,1,2,3,4,6,1};
    cout<<"sorted"<<" ";
    sort(A);
    printvector(A);
    return 0;
}
