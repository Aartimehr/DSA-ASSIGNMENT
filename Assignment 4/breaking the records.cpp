#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m=0,p=0;
    cin>>n;
    int arr[n]; //arr={3,4,6,2,4,6}
    for(int i=0;i<n;i++) cin>>arr[i];
    int max=arr[0];
    int min=arr[0];
    //for maximum score
    for(int i=1;i<n;i++){
        if(arr[i] > max){ 
            max = arr[i];
            m++;
        }
        else if (arr[i]<min){ 
            min= arr[i];
            p++;
            }
        else continue;
    }
    
    cout<<m<<" "<<p<<endl;
    return 0;
}
Fo
