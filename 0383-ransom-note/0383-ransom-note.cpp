class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int, int> mp;
        
        for(auto x : magazine) {
            mp[x]++;
        }
        
        for(int x : ransomNote) {
            if(mp.find(x) == mp.end()) {
                return false;
            }
            else{
                mp[x]--;
                if(mp[x] == 0){
                    mp.erase(x);
                }
            }
        }
        return true;
    }
};