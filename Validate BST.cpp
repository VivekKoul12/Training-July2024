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
void ans(vector<int>& sol, TreeNode* root) {
        if (root == NULL) {
            return;
        }
        ans(sol, root->left);
        sol.push_back(root->val);
        ans(sol, root->right);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>sol;
        ans(sol,root);
        for(int i=0;i<sol.size()-1;i++){
            if(sol[i]>=sol[i+1]){
                return false;
            }
        
        
        }
        return true;
    }
        
    
};
