class Solution {
public:
    
    static bool cmp(int a, int b) {
        bitset<32> x(a);
        bitset<32> y(b);
        
        if(x.count() == y.count()) {
            return a < b;
        }
        else {
            return x.count() < y.count();
        }
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }

    
};