class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int m = word1.size(), n = word2.size();
        int x = 0, y =0;
        int i = 0, j = 0;
        
        while(x<m && y<n){
            if(word1[x][i] != word2[y][j]) return false;
            
            else {
                i++; j++;
                
                if(i == word1[x].size()){
                    i = 0;
                    x++;
                }
                if(j == word2[y].size()){
                    j = 0;
                    y++;
                }
            }  
        }
        
        if(x==m && y==n) return true;
        
        return false;
    }
};