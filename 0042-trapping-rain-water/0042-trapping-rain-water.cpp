class Solution {
public:
    
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxleft = 0;
        int maxright = 0;
        long long int res = 0;
        
        while(left <= right){
            if(maxleft <= maxright){
                maxleft = max(maxleft, height[left]);
                res = res + maxleft - height[left];
                left++;
            }
            
            else{
                maxright = max(maxright, height[right]);
                res = res + maxright - height[right];
                right--;
            }
        }
        return res;
    }    
    
//     int trap(vector<int>& height) {
//         int n = height.size();
//         if(n == 1) return 0;
//         vector<int> lmax(n), rmax(n);
        
//         lmax[0] = height[0];
//         for(int i = 1; i < n; i++){
//             lmax[i] = max(lmax[i-1], height[i]); 
//         }
        
//         rmax[n-1] = height[n-1];
//         for(int i = n-2; i >= 0; i--){
//             rmax[i] = max(rmax[i+1], height[i]); 
//         }
        
//         int res = 0;
//         for(int i = 0; i < n; i++){
//             res += min(lmax[i], rmax[i]) - height[i];
//         }
        
//         return res;
//     }
};