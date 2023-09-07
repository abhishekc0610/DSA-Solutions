class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = cost.size();
        int res = 0, curr_amount = 0, total_diff = 0; 
        
        for(int i = 0; i < n; i++){
            total_diff += (gas[i] - cost[i]);
            curr_amount += (gas[i] - cost[i]);
            
            if(curr_amount < 0){
                res = i+1;
                curr_amount = 0;
            }
        }
        if(total_diff < 0) return -1;
        
        return res;
    }
};