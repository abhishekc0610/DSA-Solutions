class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int sz = arr.size();
        vector<int> candidates = {arr[sz/4], arr[sz/2], arr[sz*3/4]};
        
        for (auto cand : candidates) {
            auto st = lower_bound(begin(arr), end(arr), cand) - begin(arr);
            auto ed = upper_bound(begin(arr), end(arr), cand) - begin(arr);
            if (4 * (ed - st) > sz)
                return cand;
        }
        return -1;
    }
};