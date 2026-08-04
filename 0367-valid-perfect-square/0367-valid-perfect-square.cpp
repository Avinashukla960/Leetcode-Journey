class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo=0;
        int hi=num;
        bool flag = false;
        while(lo<=hi){
            int mid=(lo+lo+hi-lo)/2;
            long long m = (long long)mid;
            if(m*m==num){return true;
            flag = true;}
            else if(m*m<num)lo=mid+1;
            else hi=mid-1;
        }

        if(!flag)return false;
        else return true;

    }
};