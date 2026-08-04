class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector <int> v(2,-1);
    int lo=0;
    int hi=nums.size()-1;
    bool flag = false;
    while(lo<=hi){
        int mid = (lo+lo+hi-lo)/2;
        if(nums[mid]==target){
            if(mid==0)
            {
                v[0]=mid;
                flag = true;
                break;
            }
            else{
            if(nums[mid-1]==target)hi=mid-1;
            else {
                v[0]=mid;
                flag = true;
                break;
            }}
        }
        else if (nums[mid]<target)lo=mid+1;
        else hi=mid-1;
    }
    lo=0;
    hi=nums.size()-1;
    flag = false;
    while(lo<=hi){
        int mid = (lo+lo+hi-lo)/2;
        if(nums[mid]==target){
            if(mid==nums.size()-1)
            {
                v[1]=mid;
                flag = true;
                break;
            }
            else{
            if(nums[mid+1]==target)lo=mid+1;
            else {
                v[1]=mid;
                flag = true;
                break;
            }}
        }
        else if(nums[mid]<target)lo=mid+1;
        else hi=mid-1;
    }
    return v;
    }
    
};