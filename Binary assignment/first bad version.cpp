class Solution {
public:
    int firstBadVersion(int n) {
        long int high = n;
        long int low = 1;
        long int mid;
        while(low<high){
            mid=low+(high-low)/2;
            if (isBadVersion(mid))high = mid;
            else low=mid+1;
        }
        return low;
    
    }
};
