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
    int cnt = INT_MAX;
    void minDepthofTree(TreeNode* root, int level)
    {
        if(root->left){
            minDepthofTree(root->left, level + 1);
        }
        if(root->right){
            minDepthofTree(root->right, level + 1);
        }
        if(root && root->left == NULL && root->right == NULL){
            cnt = min(cnt, level);
        }
    }
    
    
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        minDepthofTree(root, 1);
        return cnt;
    }
};