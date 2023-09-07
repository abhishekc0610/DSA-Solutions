class Solution {
public:

    int sub_possible(char a, char b) {
        if(a=='I' && b=='V') return 4;
        else if(a=='I' && b=='X') return 9;
        else if(a=='X' && b=='L') return 40;
        else if(a=='X' && b=='C') return 90;
        else if(a=='C' && b=='D') return 400;
        else if(a=='C' && b=='M') return 900;

        return 0;
    }

    int value_acc_letter(char ch) {
        if(ch == 'I') return 1;
        else if(ch == 'V') return 5;
        else if(ch == 'X') return 10;
        else if(ch == 'L') return 50;
        else if(ch == 'C') return 100;
        else if(ch == 'D') return 500;
        else if(ch == 'M') return 1000;

        return 0;
    }

    int romanToInt(string s) {
        int n = s.size(), res = 0;

        for(int i = 0; i < n; i++){ 
            int val = 0; 
            if(i < n-1) {
                val = sub_possible(s[i], s[i+1]);
            }

            if(val > 0){
                res = res + val;
                i++;
            }
            else{
                res = res + value_acc_letter(s[i]);
            }
        }

        return res;
    }
};