class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        stack<int> st;
        int m = target.size(), j = 0;
        
        for(int i = 1; i <= n && j < m; i++) {
            st.push(i);
            res.push_back("Push");
            
            if(st.top() == target[j]) {
                j++;
            }
            else {
                st.pop();
                res.push_back("Pop");
            }
        }
        
        return res;
    }
};