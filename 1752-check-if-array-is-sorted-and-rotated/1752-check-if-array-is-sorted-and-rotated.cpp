class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        
        for(int i = 1; i < n; i++) {
            if(nums[i] < nums[i-1]) {
                if(flag == true) return false;
                else flag = true;
            }
        }
        
        if(flag==false || nums[0]>=nums[n-1]) {
            return true;
        }
        
        return false;
    }
};