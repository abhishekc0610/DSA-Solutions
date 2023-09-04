class Solution {
public:
    
    bool vaild_ch(char ch)
    {
        if( (ch>='a'&& ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )
            return 1;
        else
            return 0;
    }
    
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n-1;
        
        while(i < j){
            if(!vaild_ch(s[i])){
                i++;
                continue;
            }
            
            if(!vaild_ch(s[j])){
                j--;
                continue;
            }
            
            
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        
        return true;
    }
};