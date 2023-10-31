class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        // a ^ b = c then a ^ c = b and b ^ c = a
        
        int n = pref.size();
        
        vector<int> res(n);
        res[0] = pref[0];
        
        int val = pref[0];
        for(int i = 1; i < n; i++) {
            // hint : res[0] ^ ... ^ res[i] = pref[i] 
            // then res[0] ^ ... ^ res[i-1] ^ pref[i] = res[i]
            res[i] = val ^ pref[i];
            val = val ^ res[i];
        }
        
        return res;
    }
};