class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        if(n < 2) return n;

        int i = 2, val = 2;
        for(int j = 2; j < n; j++){
            if(nums[j] != nums[i-2]){
                swap(nums[i], nums[j]);
                i++; val++;
            }
        }

        return val;

    }
};