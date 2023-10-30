class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        
        long long int res = 0;
	    for(int i = 0; i < 32; i++) {
	        int ones = 0;
	        for(int j = 0; j < n; j++) {
	            if(nums[j] & (1 << i)) {
	                ones++;
	            }
	        }
	        res += (ones * (n-ones));
	    }
	    
	    return res;
    }
};