class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ones1(32), ones2(32);
        
        for(int i = 0; i < 32; i++) {
            for(int j = 0; j < arr1.size(); j++) {
                if(arr1[j] & (1 << i)){
                    ones1[i]++;
                }
            }  
        }
        
        for(int i = 0; i < 32; i++) {
            for(int j = 0; j < arr2.size(); j++) {
                if(arr2[j] & (1 << i)){
                    ones2[i]++;
                }
            }  
        }
        
        long long int res = 0;
        for(int i = 0; i < 32; i++) {
            if(ones1[i]%2 && ones2[i]%2) {
                res += pow(2, i);
            }
        }
        
        return res;
    }
};