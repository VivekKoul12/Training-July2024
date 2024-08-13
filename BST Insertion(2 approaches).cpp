class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
//         TreeNode* newNode = new TreeNode(val); 
        
//         if (root == NULL) {
//             return newNode; 
//         }
        
//         TreeNode* current = root;
//         while (true) {
//             if (val < current->val) {
//                 if (current->left == NULL) {
//                     current->left = newNode; 
//                     break;
//                 } else {
//                     current = current->left;
//                 }
//             } else {
//                 if (current->right == NULL) {
//                     current->right = newNode; 
//                     break;
//                 } else {
//                     current = current->right; 
//                 }
//             }
//         }
        
//         return root; 
//     }
// };
if(root==NULL)
    root=new TreeNode(val);
    else if(val<root->val)
    root->left=insertIntoBST(root->left,val);
    else
    root->right=insertIntoBST(root->right,val);
    return root;
    }
};
