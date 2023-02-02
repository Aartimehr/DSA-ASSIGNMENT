int getTotalX(vector<int> a, vector<int> b) {
           int ans=0;
           for(int i=1;i<=100;i++)
           {
               int temp=1;
               for(int j=0;j<a.size();j++)
               if(i%a[j]!=0) temp=0;
               for(int k=0;k<b.size();k++)
               if(b[k]%i!=0) temp=0;
               if (temp==1)
               ans++;
           }
           return ans;
}
