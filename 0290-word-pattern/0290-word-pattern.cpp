class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.size(), m = s.size();
        unordered_map<int, string> mp;
        
        unordered_set<char> a;
        unordered_set<string> b;
        
        int j = 0, i = 0;
        for(i = 0; i<n && j<m; i++){
            a.insert(pattern[i]);
            string x = "";
            
            while(j<m && s[j] != ' '){
                x += s[j];
                j++;
            }
            b.insert(x);
            j++;
            
            if((mp.find(pattern[i]) != mp.end()) && (mp[pattern[i]] != x)) {
                return false;
            }
            else{
                mp[pattern[i]] = x;
            }
        }
        
        if(i<n || j<m) return false;
        
        // "abba" & "dog dog dog dog" -> false
        if(a.size() != b.size()) return false;        
        
        return true;
    }
};