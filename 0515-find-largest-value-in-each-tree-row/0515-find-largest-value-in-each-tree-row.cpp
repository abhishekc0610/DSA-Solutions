/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> q;
        vector<int> res;
        
        q.push(root);
        
        while(!q.empty()) {
            int n = q.size();
            int mx = INT_MIN;
            
            for(int i = 0; i < n; i++){
                TreeNode* curr = q.front();
                mx = max(mx, curr->val);
                q.pop();
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            
            res.push_back(mx);
        }
        
        return res;
    }
};