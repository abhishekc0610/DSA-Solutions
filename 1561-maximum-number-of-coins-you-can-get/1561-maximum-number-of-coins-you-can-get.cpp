class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        
        int res = 0, l = 0, r = piles.size() - 2;
        
        while(l < r) {
            res += piles[r];
            l++;
            r -= 2;
        }
        
        return res;
    }
};