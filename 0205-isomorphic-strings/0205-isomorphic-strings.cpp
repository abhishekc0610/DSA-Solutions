class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size(), m = t.size();
        if(n != m) return false;
        unordered_map<char, char> mp;
        unordered_set<char> st;
        
        for(int i = 0; i < n; i++){
            if(mp.find(s[i]) == mp.end()){
                mp.insert({s[i], t[i]});
            }
            else{
                if(t[i] != mp[s[i]]) return false;
            }
            
            st.insert(t[i]);
        }
        
        if(mp.size() != st.size()) return false;
        
        return true;
    }
};