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
void ans(vector<int>&sol,TreeNode* root){
    if(root==NULL){
        return;
    }
    ans(sol,root->left);
    sol.push_back(root->val);
    ans(sol,root->right);
}
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int> sol;
    ans(sol,root);
    return sol;
        
    }

};
