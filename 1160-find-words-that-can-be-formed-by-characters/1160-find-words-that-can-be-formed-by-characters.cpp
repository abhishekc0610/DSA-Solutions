class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mp;
        int res = 0;
        
        for(auto x : chars){
            mp[x]++;
        }
        
        for(auto x : words) {
            unordered_map<char, int> temp;
            bool flag = true;
            for(auto y : x) {
                temp[y]++;
                
                if(temp[y] > mp[y]) {
                    flag = false;
                    break;
                }
            }
            if(flag) res += x.size();
        }
        
        return res;
    }
};