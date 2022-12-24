#include<bits/stdc++.h>
using namespace std;
void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }
void sorting(vector<int>&A)
{
    int i, j, lowest;
    for (i = 0; i < A.size()-1; i++)
    {
        lowest = i;
        for (j = i+1; j < A.size(); j++)
        if (A[j] < A[lowest])
            lowest = j;
        if(lowest!=i)
            swap(&A[lowest], &A[i]);
    }
}
void printvector(vector<int>A){
for(int i=0;i<A.size();i++)
{
    cout<<A[i]<<" ";
}
cout<<endl;
}
int main()
{
    vector<int>A = {5,2,4,3,2,6,5,1,3,4,7,3};
    sorting(A);
    cout<<"sorted"<<" ";
    printvector(A);
     }
