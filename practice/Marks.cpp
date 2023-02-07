#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*b<=c*d)
    {
     cout<<"YES"<<endl;   
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
	return 0;
}
