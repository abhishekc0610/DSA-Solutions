class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
//         vector<string> res;
//         stack<int> st;
//         int m = target.size(), j = 0;
        
//         for(int i = 1; i <= n && j < m; i++) {
//             st.push(i);
//             res.push_back("Push");
            
//             if(st.top() == target[j]) {
//                 j++;
//             }
//             else {
//                 st.pop();
//                 res.push_back("Pop");
//             }
//         }
        
//         return res;
        
        vector<string> res;
        int m = target.size(), j = 0;
        
        for(int i = 1; i <= n && j < m; i++) {
            if(i == target[j]) {
                res.push_back("Push");
                j++;
            }
            else{
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        return res;
    }
};