class Solution {
public:
    int mySqrt(int x) {
       long long int high=x-1,low=1,midterm;
       if(x<=0) return x;
       while(high>=low){
           midterm=(high+low)/2;
           long long int n=midterm*midterm;
           if(n==x) return midterm;
           else if(n<x) low = midterm+1;
           else high = midterm-1;
       }
       if(low*low<=x) return low;
       else return high;
    }
    
};
