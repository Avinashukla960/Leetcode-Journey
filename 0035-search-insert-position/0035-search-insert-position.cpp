class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        bool flag=false;
        while(lo<=hi){
            int mid=(lo+lo+hi-lo)/2;
            if(nums[mid]==target){
                flag = true;
                return mid;
                
            }
            else if(nums[mid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return hi+1;
    }
};