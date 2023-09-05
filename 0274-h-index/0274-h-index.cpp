class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int n = citations.size();
        int start = 0, end = n-1, res = 0;

        while(start <= end) {
            int mid = start + (end-start) / 2;

            if(citations[mid] > (n-mid)){
                res = max(res, (n-mid));
                end = mid-1;
            }

            else if(citations[mid] <= (n-mid)){
                res = max(res, citations[mid]);
                start = mid+1;
            }
        }
        return res;
    }
};