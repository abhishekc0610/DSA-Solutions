class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> st;
        int k = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
            int s = i+1;
            int e = n-1;

            while(s < e){
                if(nums[i] + nums[s] + nums[e] == 0){
                    vector<int> temp = {nums[i], nums[s], nums[e]};
                    st.insert(temp);
                    s++;
                }
                else if(nums[i] + nums[s] + nums[e] < 0){
                    s++;
                }
                else{
                    e--;
                }
            }
        }

        for(auto x : st){
            res.push_back(x);
        }

        return res;
    }
};