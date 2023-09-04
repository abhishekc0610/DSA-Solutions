class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int max_reached = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(max_reached < i) return false;
            max_reached = max(max_reached, i+nums[i]);
        }
        
        return true;
        
    }
};