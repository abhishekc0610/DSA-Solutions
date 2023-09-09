class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(n == 1) return s;
        vector<string> vec(numRows, "");

        int i = 0;
        while(i < n) {

            for(int j = 0; j<numRows && i<n; j++){
                vec[j] += s[i];
                i++;
            }
            for(int j = numRows-2; j>0 && i<n; j--){
                vec[j] += s[i];
                i++;
            }
        }

        string res = "";
        for(auto x : vec) {
            res += x;
        }

        return res;
    }
};