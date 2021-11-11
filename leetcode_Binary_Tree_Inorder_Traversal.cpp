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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        if(root==nullptr){
            return ans;
        }
        vector<int> used(3);
        dfs(root,ans);
        return ans;

    }
private:
    void dfs(TreeNode* root,vector<int>& ans){
        if((root->left == nullptr) && (root->right == nullptr)){
            ans.push_back(root->val);
            return;
        }
        
        if(root->left){
            dfs(root->left,ans);
        }
        ans.push_back(root->val);
        if(root->right){
            dfs(root->right,ans);
        }
        
    }
};