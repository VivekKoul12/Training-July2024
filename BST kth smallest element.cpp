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
        if (root == nullptr) {
            return;
        }
        ans(sol, root->left);     // Traverse the left subtree
        sol.push_back(root->val); // Store the root's value
        ans(sol, root->right);    // Traverse the right subtree
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> sol;         // Vector to store the elements in sorted order
        ans(sol, root);          // Fill the vector with in-order traversal
        
        return sol[k - 1];       // Return the k-th smallest element (1-indexed)
    }
};
