class Solution {
public:
    
    /* 
    Logic: Row(i) = Row(i-1) + Flip all bits of Row(i-1)
Number of bits in a row, Nb = pow(2, row_number-1)

If K is less than Nb/2 (lies in 1st half), then we can check same bit in previous row as both will be same : [kthGrammar(N-1, K)]
If K is more than Nb/2 (lies in 2nd half), then we can check (K-Nb/2)th bit (which will be in 1st half) and flip that.
Example:
0110
0110 1001
5th bit = flip of 1st bit same row = flip of 1st bit in previous row. [!kthGrammar(N-1, K-pow(2, N-2));] (pow(2, N-2) is half of number bits in that row)


row 1: 0
row 2: 01
row 3: 0110
row 4: 01101001
row 5: 01101001 10010110
*/
    
    int kthGrammar(int n, int k) {
        if (n == 1) return 0;
        
        if(k <= pow(2, n-1)/2) return kthGrammar(n-1, k);
            
        else return !kthGrammar(n-1, k-pow(2, n-1)/2);
    }
    
};