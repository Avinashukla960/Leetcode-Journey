class Solution {
public:
    void reversePart(vector <int> &a,int i,int j){
        while(i<=j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(k>=nums.size()){k=k%nums.size();}
        reversePart(nums,0,nums.size()-k-1);
        reversePart(nums,nums.size()-k,nums.size()-1);
        reversePart(nums,0,nums.size()-1);       
    }
};