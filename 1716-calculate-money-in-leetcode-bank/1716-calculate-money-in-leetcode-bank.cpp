class Solution {
public:
    int totalMoney(int n) {
        int quo = n/7, rem = n%7;
        
        // ap with a = 28, n = quo, d = 7 and formula = n/2 * (2a + (n-1)d)
        int x = (quo *(2*28 + (quo-1)*7)) / 2;  
        
        // ap with a1 = quo+1, an = quo+rem, n = rem and formula = n/2 * (a1 + an)
        int y = (((quo+1) + (quo+rem)) * rem) / 2;
        
        return x + y;
    }
};