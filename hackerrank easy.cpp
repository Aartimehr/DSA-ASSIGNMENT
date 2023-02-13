#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    int sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++) 
    {
        int a;
        cin>>a;
        if(i!=k) 
        {
        sum+=a;
        }
    }
    int l;
    cin>>l;
    if(sum/2==l)
     {
    cout<<"Bon Appetit"<<endl;
    }
    else 
    {
    cout<<l-sum/2<<endl;
    }
}
