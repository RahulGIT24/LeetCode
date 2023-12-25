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
    
    bool check(TreeNode* nodeLeft, TreeNode* nodeRight){
        
        if(nodeLeft == NULL || nodeRight == NULL){
            return nodeLeft == nodeRight;
        }
        
        return (nodeLeft -> val == nodeRight->val && check(nodeLeft->left,nodeRight->right) && check(nodeLeft->right,nodeRight->left));
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        TreeNode *nodeLeft = root->left;
        TreeNode *nodeRight = root->right;
        
        return check(nodeLeft,nodeRight);
    }
};