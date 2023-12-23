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
    void traversal(TreeNode *root, vector<vector<int>> &ans){
        if(root == NULL) return;
        queue<TreeNode*> q;
        q.push(root);
        bool flag = true; // left to right
        
        while(!q.empty()){
            int size = q.size();
             vector<int> ds(size);
            for(int i = 0; i<size; i++){
                TreeNode *node = q.front();
                q.pop();
                
                int index = (flag)?i:(size-i-1);
                ds[index] = node->val;
                
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
            flag = !flag;
            ans.push_back(ds);
        }
    }
    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        traversal(root, ans);
        return ans;
    }
};