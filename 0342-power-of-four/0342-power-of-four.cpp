class Solution {
public:
    bool isPowerOfFour(int n) {
        
        // Condition of power of four -> n should be power of two and (n-1) should be multiple of 3;
        
        // if(n>0 && (n&(n-1)==0)){ // to check if number is power of 2
        //     return ((n-1)%3==0) ; //checks if it is power of 4 example : (4-1)=3 / (16-1)=15 / 64-1=63 
        // }    
        
        return (n>0 && ((n&(n-1))==0)) && ((n-1)%3==0);

    }
};