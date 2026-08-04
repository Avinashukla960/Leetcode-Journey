// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long num = (long long)n;
        long long lo=0;
        long long hi=num;
        long long ans=-1;
        bool flag = false;
        while (lo<=hi){
            long long mid = (lo+lo+hi-lo)/2;
            if(isBadVersion(mid)){
                if(isBadVersion(mid-1)){hi=mid-1;
                ans = mid-1;
                }
                else {
                    flag = true;
                    return mid;}
            }
            else if(!isBadVersion(mid))lo=mid+1;
            
        }
        return ans;
        
    }
};