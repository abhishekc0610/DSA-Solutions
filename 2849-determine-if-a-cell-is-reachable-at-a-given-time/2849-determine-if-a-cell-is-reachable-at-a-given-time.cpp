class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int min_dist = max(abs(sx-fx), abs(sy-fy));
        
        if(min_dist==0 and t==1) return false;
        
        return t >= min_dist;
    }
};