class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        vector <int> v;
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1){
                v.push_back(nums[i]);
            }
            else if(nums[i]!=nums[i+1])v.push_back(nums[i]);
            
        }
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1]&&v[i]>v[i+1])count++;
            if(v[i]<v[i-1]&&v[i]<v[i+1])count++;
        }
        return count;
    }
};