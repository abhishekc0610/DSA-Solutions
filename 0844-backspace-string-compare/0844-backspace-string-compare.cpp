class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size(), m = t.size();
        stack<int> a, b;
        
        for(int i = 0; i < n; i++) {
            if(!a.empty() && s[i] == '#'){
                a.pop();
                continue;
            }
            else if(s[i] != '#') a.push(s[i]);
        }
        
        for(int i = 0; i < m; i++) {
            if(!b.empty() && t[i] == '#'){
                b.pop();
                continue;
            }
            else if(t[i] != '#') b.push(t[i]);
        }
        
        if(a.size() != b.size()) return false;
        
        while(!a.empty()) {
            if(a.top() != b.top()) {
                return false;
            }
            a.pop(); b.pop();
        }
        
        return true;
    }
};